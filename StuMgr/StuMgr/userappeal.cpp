#include "userappeal.h"
#pragma execution_character_set("utf-8")

UserAppeal::UserAppeal(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.pushBtn, SIGNAL(clicked()), this, SLOT(addAppeal()));
}

UserAppeal::~UserAppeal()
{

}

void UserAppeal::addAppeal(){
	if (checkData())
	{
		int id = ui.idlineEdit->text().toInt();
		QString name = ui.namelineEdit->text();
		QString classname = ui.classlineEdit->text();
		QString email = ui.emaillineEdit->text();
		QDateTime createtime = QDateTime::currentDateTime();
		QString str = createtime.toString("yyyy-MM-dd hh:mm:ss dddd");
		ssql = new SqliteSql;
		ssql->getSql();
		QSqlQuery query;
		query = QSqlQuery::QSqlQuery(ssql->db);
		QString sql = "insert into Appeal(id,name,class,email,date)values("+QString::number(id)+",'"+name
			+"','"+classname+"','"+email+"','"+str+"')";
		if (!query.exec(sql))
		{
			QMessageBox::warning(NULL, "warning", "服务器正忙，请稍后重试！", QMessageBox::Yes | QMessageBox::NoButton, QMessageBox::NoButton);
		} 
		else
		{
			QMessageBox::warning(NULL, "warning", "申诉提交成功！", QMessageBox::Yes | QMessageBox::NoButton, QMessageBox::NoButton);
			close();
		}
	}
	
}

bool UserAppeal::checkData(){
	bool flag = false;
	if (ui.classlineEdit->text().isEmpty()||ui.emaillineEdit->text().isEmpty()||ui.idlineEdit->text().isEmpty()||ui.namelineEdit->text().isEmpty())
	{
		flag = false;
		QMessageBox::warning(NULL, "warning", "资料未填写完整！", QMessageBox::Yes | QMessageBox::NoButton, QMessageBox::NoButton);
	} 
	else
	{
		flag = true;
	}
	return flag;
}