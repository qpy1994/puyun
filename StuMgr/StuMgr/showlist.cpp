#include "showlist.h"
#include "qdebug.h"
#pragma execution_character_set("utf-8")

showList::showList(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.editBtn, SIGNAL(clicked()), this, SLOT(infoEdit()));
	connect(ui.cancelBtn, SIGNAL(clicked()), this, SLOT(closeEdit()));
	connect(ui.DBBtn, SIGNAL(clicked()), this, SLOT(dbEdit()));
}

showList::~showList()
{

}

void showList::infoEdit(){
	
	if ((!ui.agelineEdit->isReadOnly()) || (!ui.namelineEdit->isReadOnly()) || 
		(!ui.idlineEdit->isReadOnly()) || (!ui.classlineEdit->isReadOnly())){
		ui.editBtn->setText("保存");
		connect(ui.editBtn, SIGNAL(clicked()), this, SLOT(saveEdit()));
		flag = true;
	}
	else{
		ui.editBtn->setText("保存");
		ui.cancelBtn->setText("取消");
		connect(ui.editBtn, SIGNAL(clicked()), this, SLOT(saveEdit()));
		ui.agelineEdit->setReadOnly(false);
		ui.classlineEdit->setReadOnly(false);
		ui.idlineEdit->setReadOnly(false);
		ui.namelineEdit->setReadOnly(false);
		ui.sexComboBox->setEnabled(true);
		flag = true;
	}
	
}

void showList::saveEdit(){

}

void showList::dbEdit(){
	
	dbm.show();
	//hide();
}

void showList::closeEdit(){
	if (!flag)
	{
		close();
	} 
	else
	{
		
		ui.editBtn->setText("编辑");
		ui.cancelBtn->setText("关闭");
		ui.agelineEdit->setReadOnly(true);
		ui.classlineEdit->setReadOnly(true);
		ui.idlineEdit->setReadOnly(true);
		ui.namelineEdit->setReadOnly(true);
		ui.sexComboBox->setEnabled(false);
		flag = false;
	}
	flag = false;
}