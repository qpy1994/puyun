#include "choosetype.h"
#pragma execution_character_set("utf-8")

chooseType::chooseType(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.okBtn, SIGNAL(clicked()), this, SLOT(openAu()));
}

chooseType::~chooseType()
{

}

void chooseType::openAu(){
	if (ui.sBtn->isChecked())
	{
		au = new addUser;
		au->ui.subjectLab->hide();
		au->ui.subjectLineEdit->hide();		
		au->show();
		close();
	} 
	else if (ui.tBtn->isChecked())
	{
		au = new addUser;
		au->ui.classLab->hide();
		au->ui.classlineEdit->hide();
		au->ui.tidLab->hide();
		au->ui.tidEdit->hide();
		au->show();
		close();
	}
	else
	{
		QMessageBox::warning(NULL, "warning", "请选择用户类型", QMessageBox::Yes | QMessageBox::NoButton, QMessageBox::NoButton);
	}
	
}