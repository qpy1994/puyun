#include "forgetpwd.h"

#pragma execution_character_set("utf-8")
forgetPwd::forgetPwd(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.idlineEdit->hide();
	ui.idlabel->hide();
	ui.pwdlineEdit->hide();
	ui.pwdlineEdit2->hide();
	ui.pwdLab->hide();
	ui.pwdLab2->hide();
	connect(ui.okBtn, SIGNAL(clicked()), this, SLOT(editPwd()));
	
}

forgetPwd::~forgetPwd()
{

}



void forgetPwd::editPwd(){
	errorId = 0;
	if (ui.answerEdit->text() == "秦普云")
	{
		if (flag)
		{
			QMessageBox::warning(NULL, "warning", "回答正确！", QMessageBox::Yes | QMessageBox::NoButton, QMessageBox::NoButton);
		}
		ui.answerEdit->hide();
		ui.questionLab->hide();
		ui.idlineEdit->show();
		ui.idlabel->show();
		ui.pwdlineEdit->show();
		ui.pwdlineEdit2->show();
		ui.pwdLab->show();
		ui.pwdLab2->show();
		flag = false;
		if (!ui.idlineEdit->text().isEmpty())
		{
			connect(ui.okBtn, SIGNAL(clicked()), this, SLOT(changePwd()));
		}
		
	}
	else
	{
		QMessageBox::warning(NULL, "warning", "回答错误！", QMessageBox::Yes | QMessageBox::NoButton, QMessageBox::NoButton);
	}
}

void forgetPwd::changePwd(){
	bool ok = true;
	stu.setId(ui.idlineEdit->text().toInt(&ok,10));
	stu = stusql.sluSearch(stu)[0];
	if (QString::number(stu.getId()) == ui.idlineEdit->text())
	{
		if (ui.pwdlineEdit->text() != ui.pwdlineEdit2->text())
		{
			errorId = 2;
			QMessageBox::warning(NULL, "warning", "两次密码输入不一致，请重新输入！", QMessageBox::Yes | QMessageBox::NoButton, QMessageBox::NoButton);
		}
		stu.setPwd(ui.pwdlineEdit->text());
		if ((errorId == 0) && (stusql.changeStu(stu) > 0))
		{
			QMessageBox::warning(NULL, "warning", "修改成功！", QMessageBox::Yes | QMessageBox::NoButton, QMessageBox::NoButton);
			close();
		}
		else
		{
			QMessageBox::warning(NULL, "warning", "修改失败！", QMessageBox::Yes | QMessageBox::NoButton, QMessageBox::NoButton);
		}
	}
	else
	{
		QMessageBox::warning(NULL, "warning", "查无此人！", QMessageBox::Yes | QMessageBox::NoButton, QMessageBox::NoButton);
		errorId = 1;
	}
}