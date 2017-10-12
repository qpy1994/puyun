#include "adduser.h"
#pragma execution_character_set("utf-8")

addUser::addUser(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.cancelBtn, SIGNAL(clicked()), this, SLOT(closeAddUser()));
	connect(ui.editBtn, SIGNAL(clicked()), this, SLOT(addNewUser()));
}

addUser::~addUser()
{

}

void addUser::closeAddUser(){
	close();
}

void addUser::addNewUser(){
	if (ui.subjectLineEdit->isHidden())
	{
		//addstudent
		if (isCheckAdd() && (!ui.classlineEdit->text().isEmpty()) && (!ui.tidEdit->text().isEmpty()))
		{
			student stu;
			stu.setId(ui.idlineEdit->text().toInt());
			stu.setName(ui.namelineEdit->text());
			stu.setPwd(ui.pwdEdit->text());
			stu.setAge(ui.agelineEdit->text().toInt());
			stu.setClassname(ui.classlineEdit->text());
			stu.setSex(ui.sexComboBox->currentText());
			stu.setTid(ui.tidEdit->text().toInt());
			if (ssql.sluSearch(stu.getId(),stu.getName(),"",0).size()>0)
			{
				QMessageBox::warning(NULL, "warning", "用户名或编号已存在，请重新输入！", QMessageBox::Yes | QMessageBox::NoButton, QMessageBox::NoButton);
			} 
			else
			{
			
				if (ssql.insertStu(stu)>0)
				{
				QMessageBox::warning(NULL, "warning", "添加成功", QMessageBox::Yes | QMessageBox::NoButton, QMessageBox::NoButton);
				close();
				} 
				else
				{
				QMessageBox::warning(NULL, "warning", "添加失败", QMessageBox::Yes | QMessageBox::NoButton, QMessageBox::NoButton);
				}
			}
		}
		else{
			QMessageBox::warning(NULL, "warning", "注册信息不完全，请填写完毕", QMessageBox::Yes | QMessageBox::NoButton, QMessageBox::NoButton);

		}
		
	} 
	else
	{
		//addteacher
		if (isCheckAdd() && (!ui.subjectLineEdit->text().isEmpty()))
		{
			teacher t;
			t.setId(ui.idlineEdit->text().toInt());
			t.setName(ui.namelineEdit->text());
			t.setPwd(ui.pwdEdit->text());
			t.setAge(ui.agelineEdit->text().toInt());
			t.setSex(ui.sexComboBox->currentText());
			t.setSubject(ui.subjectLineEdit->text());
			
			if (!(tsql.findteacher(ui.idlineEdit->text().toInt()).getName().isEmpty()))
			{
				
				QMessageBox::warning(NULL, "warning", "用户编号已存在，请重新输入！", QMessageBox::Yes | QMessageBox::NoButton, QMessageBox::NoButton);
			}
			else
			{

				if (tsql.addteacher(t) > 0)
				{
					QMessageBox::warning(NULL, "warning", "添加成功", QMessageBox::Yes | QMessageBox::NoButton, QMessageBox::NoButton);
					close();
				}
				else
				{
					QMessageBox::warning(NULL, "warning", "添加失败", QMessageBox::Yes | QMessageBox::NoButton, QMessageBox::NoButton);
				}
			}
			
		}
		else{
			QMessageBox::warning(NULL, "warning", "注册信息不完全，请填写完毕", QMessageBox::Yes | QMessageBox::NoButton, QMessageBox::NoButton);

		}
	}
}

bool addUser::isCheckAdd(){
	bool flag = false;
	if (ui.agelineEdit->text().isEmpty()||ui.idlineEdit->text().isEmpty()||ui.namelineEdit->text().isEmpty()||ui.pwdEdit->text().isEmpty())
	{
		//QMessageBox::warning(NULL, "warning", "注册信息不完全，请填写完毕", QMessageBox::Yes | QMessageBox::NoButton, QMessageBox::NoButton);
		flag = false;
	} 
	else
	{
		flag = true;
	}
	return flag;
}