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
			QMessageBox::about(NULL, "��ʾ", "�������óɹ���");
			close();
		} 
		else
		{
			QMessageBox::about(NULL, "��ʾ", "��������ʧ�ܣ�");
		}
			
		}

		if (type == "teacher")
		{
			if (tsql.editPwd(id, ui.pwdlineEdit->text()) > 0)
			{
				QMessageBox::about(NULL, "��ʾ", "�������óɹ���");
				close();
			}
			else
			{
				QMessageBox::about(NULL, "��ʾ", "��������ʧ�ܣ�");
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
		QMessageBox::about(NULL, "��ʾ", "�������벻һ�£����������ã�");
		return false;
	}
}

void changePwd::initEdit(){
	ui.idlineEdit->setText(QString::number(id));
	ui.idlineEdit->isReadOnly();
	if (type == "student")
	{
		ui.idLab->setText("ѧ����ţ�");
	}

	if (type == "teacher")
	{
		ui.idLab->setText("��ʦ��ţ�");
	}
}