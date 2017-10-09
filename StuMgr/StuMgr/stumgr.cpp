#include "stumgr.h"
#include "qmessagebox.h"

#pragma execution_character_set("utf-8")
StuMgr::StuMgr(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.loginBtn, SIGNAL(clicked()), this, SLOT(login()));
	connect(ui.forgetPwdLab, SIGNAL(clicked()), this, SLOT(forget()));
	connect(ui.createStuLab, SIGNAL(clicked()), this, SLOT(addNewUser()));
}

StuMgr::~StuMgr()
{

}

void StuMgr::forget(){
	StuMgr::hide();
	fp.show();
}

void StuMgr::addNewUser(){
	StuMgr::hide();
	au.show();
}


void StuMgr::login(){
	name = ui.unameEdit->text();
	pwd = ui.pwdEdit->text();
	bool flag = false;
	if (name==""||pwd=="")
	{
		QMessageBox::warning(NULL, "warning", "用户名或密码错误", QMessageBox::Yes | QMessageBox::NoButton, QMessageBox::NoButton);
		flag = false;
	} 
	else
	{
		QPixmap  icon;
		int sex_id = 0;
		icon.load("pic//0.bmp");
		if (ui.teacherradioButton->isChecked())
		{
			lv_id = 0;
			teach = teasql.teacherlogin(name, pwd);
			
			if (teach.getName()==name&&teach.getPwd()==pwd)
			{
				
				flag = true;
				sl.ui.classlineEdit->hide();
				sl.ui.classLab->hide();
				sl.ui.teacherBtn->hide();
				sl.ui.idlineEdit->setText(QString::number(teach.getId()));
				sl.ui.namelineEdit->setText(teach.getName());
				sl.ui.agelineEdit->setText(QString::number(teach.getAge()));
				if (teach.getSex().contains("男"))
				{
					icon.load("pic//1.bmp");
					sex_id = 1;
				}
				
			} 
			else
			{
				QMessageBox::warning(NULL, "warning", "用户名或密码错误", QMessageBox::Yes | QMessageBox::NoButton, QMessageBox::NoButton);
			}
			
		}
		else if (ui.sturadioButton->isChecked())
		{
			lv_id = 1;
			stu = stusql.stu_login(name, pwd);
			
			if (stu.getName()==name&&stu.getPwd()==pwd)
			{
				flag = true;
				sl.ui.classlineEdit->setText(stu.getClassname());
				sl.ui.classlineEdit->setReadOnly(true);
				sl.ui.DBBtn->hide();
				if (stu.getSex()=="男")
				{
					icon.load("pic//1.bmp");
					sex_id = 1;
				}
				sl.ui.idlineEdit->setText(QString::number(stu.getId()));
				sl.ui.namelineEdit->setText(stu.getName());
				sl.ui.agelineEdit->setText(QString::number(stu.getAge()));
				sl.ui.classlineEdit->setText(stu.getClassname());
			} 
			else
			{
				QMessageBox::warning(NULL, "warning", "用户名或密码错误", QMessageBox::Yes | QMessageBox::NoButton, QMessageBox::NoButton);
			}
			
		}
		if ((!(ui.sturadioButton->isChecked())&& (!ui.teacherradioButton->isChecked())))
		{
			QMessageBox::warning(NULL, "warning", "请选择用户类型！", QMessageBox::Yes | QMessageBox::NoButton, QMessageBox::NoButton);
		}
		if (flag)
		{
			sl.ui.picLab->setPixmap(icon);
			sl.ui.picLab->resize(icon.width(), icon.height());
			sl.ui.sexComboBox->setCurrentIndex(sex_id);
			sl.ui.sexComboBox->setEnabled(false);
			sl.show();
			ui.cancelBtn->clicked();
		}
		
	}
	
}

