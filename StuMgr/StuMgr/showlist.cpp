#include "showlist.h"

#pragma execution_character_set("utf-8")

showList::showList(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	//initEdit();
	connect(ui.editBtn, SIGNAL(clicked()), this, SLOT(infoEdit()));
	connect(ui.cancelBtn, SIGNAL(clicked()), this, SLOT(closeEdit()));
	connect(ui.DBBtn, SIGNAL(clicked()), this, SLOT(dbEdit()));
	if ((!ui.agelineEdit->isReadOnly()) || (!ui.namelineEdit->isReadOnly()) ||
		(!ui.idlineEdit->isReadOnly()) || (!ui.classlineEdit->isReadOnly())){
		changeBtn();
	}
	connect(ui.teacherBtn, SIGNAL(clicked()), this, SLOT(showMyTeacher()));
}

showList::~showList()
{

}

void showList::showMyTeacher(){
	teacher myteacher;
	teacherSql tsql;
	stuSql ssql;
	myteacher = tsql.findteacher(ssql.findTid(ui.idlineEdit->text().toInt()));
	st = new showTeacher;
	st->ui.idEdit->setText(QString::number(myteacher.getId()));
	st->ui.ageEdit->setText(QString::number(myteacher.getAge()));
	st->ui.nameEdit->setText(myteacher.getName());
	st->ui.subEdit->setText(myteacher.getSubject());
	int i = st->ui.comboBox->currentIndex();
	QPixmap  icon;
	if (i==0)
	{
		icon.load("pic//0.bmp");
	} 
	else
	{
		icon.load("pic//1.bmp");
	}
	st->ui.comboBox->setCurrentIndex(i);
	st->ui.picLab->setPixmap(icon);
	st->ui.picLab->resize(icon.width(), icon.height());
	st->ui.comboBox->setEditable(false);
	st->show();
}

void showList::changeBtn(){
	ui.editBtn->setText("保存");
	ui.cancelBtn->setText("取消");
}

void showList::infoEdit(){
	
	if ((!ui.agelineEdit->isReadOnly()) || (!ui.namelineEdit->isReadOnly()) ||
		(!ui.idlineEdit->isReadOnly()) || (!ui.classlineEdit->isReadOnly())){
		
		if (checkNull())
		{
			if (ui.subEdit->isHidden())
			{
				if (ui.classlineEdit->text().isEmpty())
				{
					QMessageBox::about(NULL, "提示", "个人信息不能留空！");
				}
				else
				{
					student stu;
					stu.setId(ui.idlineEdit->text().toInt());
					ui.idlineEdit->setReadOnly(true);
					stu.setName(ui.namelineEdit->text());
					stu.setClassname(ui.classlineEdit->text());
					stu.setAge(ui.agelineEdit->text().toInt());
					stu.setSex(ui.sexComboBox->currentText());
					stuSql ssql;
					if (ssql.changeStu(stu) > 0)
					{
						QMessageBox::about(NULL, "提示", "个人信息修改成功！");
						ui.editBtn->setText("编辑");
						ui.cancelBtn->setText("关闭");
						initEdit();
					}
					else
					{
						QMessageBox::about(NULL, "提示", "个人信息修改失败！");
					}
				}
			}
			else
			{
					if (ui.subEdit->text().isEmpty())
					{
						QMessageBox::about(NULL, "提示", "个人信息不能留空！");
					}
					else
					{
						teacher tea;
						tea.setId(ui.idlineEdit->text().toInt());
						ui.idlineEdit->setReadOnly(true);
						tea.setName(ui.namelineEdit->text());
						tea.setSubject(ui.subEdit->text());
						tea.setAge(ui.agelineEdit->text().toInt());
						tea.setSex(ui.sexComboBox->currentText());
						teacherSql tsql;
						if (tsql.editTeacher(tea) > 0)
						{
							QMessageBox::about(NULL, "提示", "个人信息修改成功！");
							ui.editBtn->setText("编辑");
							ui.cancelBtn->setText("关闭");
							initEdit();
						}
						else
						{
							QMessageBox::about(NULL, "提示", "个人信息修改失败！");
						}
					}
				flag = true;
			}
		}
		else{
			ui.editBtn->setText("保存");
			ui.cancelBtn->setText("取消");
			initEdit();
			flag = true;
		}
	}
}

bool showList::checkNull(){
	if (ui.idlineEdit->text().isEmpty()||ui.namelineEdit->text().isEmpty()||ui.agelineEdit->text().isEmpty())
	{
		QMessageBox::about(NULL, "提示", "个人信息不全！");
		return false;
	}
	else{

		return true;
	}
}

void showList::dbEdit(){
	
	dbm.show();
	//hide();
}

void showList::initEdit(){
	ui.agelineEdit->setReadOnly(true);  
	ui.namelineEdit->setReadOnly(true);
	ui.idlineEdit->setReadOnly(true);
	ui.classlineEdit->setReadOnly(true);
	ui.sexComboBox->setEditable(false);
	ui.subEdit->setReadOnly(true);
	
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