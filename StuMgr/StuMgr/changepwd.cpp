#include "changepwd.h"
#include "QMessageBox"
#pragma execution_character_set("utf-8")

changePwd::changePwd(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.okBtn, SIGNAL(clicked()), this,SLOT(editPwd()));
}

changePwd::~changePwd()
{

}
void changePwd::editPwd(){
	if (PwdCheck())
	{
		if (type == "student")
		{
		if (ssql.editPwd(id,ui.pwdlineEdit->text())>0)
		{
			QMessageBox::about(NULL, "提示", "密码重置成功！");
			close();
		} 
		else
		{
			QMessageBox::about(NULL, "提示", "密码重置失败！");
		}
			
		}

		if (type == "teacher")
		{
			if (tsql.editPwd(id, ui.pwdlineEdit->text()) > 0)
			{
				QMessageBox::about(NULL, "提示", "密码重置成功！");
				close();
			}
			else
			{
				QMessageBox::about(NULL, "提示", "密码重置失败！");
			}
		}
	} 
	
}

bool changePwd::PwdCheck(){
	if ((!ui.pwdlineEdit->text().isEmpty())&&(ui.pwdlineEdit->text()==ui.checkpwdlineEdit->text()))
	{
		return true;
	} 
	else
	{
		QMessageBox::about(NULL, "提示", "两次密码不一致，请重新设置！");
		return false;
	}
}

void changePwd::initEdit(){
	ui.idlineEdit->setText(QString::number(id));
	ui.idlineEdit->isReadOnly();
	if (type == "student")
	{
		ui.idLab->setText("学生编号：");
	}

	if (type == "teacher")
	{
		ui.idLab->setText("教师编号：");
	}
}