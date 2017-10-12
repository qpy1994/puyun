#include "safequestion.h"
#pragma execution_character_set("utf-8")

safeQuestion::safeQuestion(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.okBtn, SIGNAL(clicked()), this, SLOT(safeCheck()));
	connect(ui.checkBtn, SIGNAL(clicked()), this, SLOT(showQuestion()));
	ui.questionlineEdit->setReadOnly(true);
	ui.questionLab->hide();
	ui.questionlineEdit->hide();
	ui.answerlineEdit->hide();
	ui.answerLab->hide();
	ui.okBtn->hide();
	ui.cancelBtn->hide();
}

safeQuestion::~safeQuestion()
{

}

void safeQuestion::safeCheck(){
	if (ui.answerlineEdit->text() == answer)
	{
		cp = new changePwd;
		QMessageBox::about(NULL, "提示", "回答正确！");
		switch (ui.typeCombox->currentIndex())
		{
		case 0:
			
			cp->type = "teacher";
			cp->id = ui.idlineEdit->text().toInt();
			cp->initEdit();
			cp->show();
			close();
			break;

		case  1:
			
			cp->type = "student";
			cp->id = ui.idlineEdit->text().toInt();
			cp->initEdit();
			cp->show();
			close();
			break;

		default:
			break;
		}
	}
	else
	{
		QMessageBox::about(NULL, "提示", "回答错误！");
	}

}

void safeQuestion::showQuestion(){
	
	if (ui.idlineEdit->text().isEmpty())
	{
		QMessageBox::about(NULL, "提示", "编号不能为空！");
	} 
	else
	{
		
		int id = ui.idlineEdit->text().toInt();
		if (ui.typeCombox->currentIndex() == 0)
		{
			if (tsql.safequestion(id).size()>0)
			{
				ui.questionLab->show();
				ui.questionlineEdit->show();
				ui.answerlineEdit->show();
				ui.answerLab->show();
				ui.okBtn->show();
				ui.cancelBtn->show();
				ui.questionlineEdit->setReadOnly(false);
				ui.questionlineEdit->setText(tsql.safequestion(id)[0]);
				answer = tsql.safequestion(id)[1];
				ui.questionlineEdit->setReadOnly(true);
			} 
			else
			{
				QMessageBox::about(NULL, "提示", "查无此人！");
			}
				
		} 
		else
		{
			if (ssql.safeQuestion(id).size()>0)
			{
				ui.questionLab->show();
				ui.questionlineEdit->show();
				ui.answerlineEdit->show();
				ui.answerLab->show();
				ui.okBtn->show();
				ui.cancelBtn->show();
				ui.questionlineEdit->setReadOnly(false);
				ui.questionlineEdit->setText(ssql.safeQuestion(id)[0]);
				answer = ssql.safeQuestion(id)[1];
				ui.questionlineEdit->setReadOnly(true);
			}
			else
			{
				QMessageBox::about(NULL, "提示", "查无此人！");				
			}
		}

 	}
}
