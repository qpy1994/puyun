#ifndef STUMGR_H
#define STUMGR_H

#include <QtWidgets/QMainWindow>
#include "ui_stumgr.h"
#include "showlist.h"
#include "SqliteSql.h"
#include "forgetpwd.h"
#include "adduser.h"
#include "stuSql.h"
#include "teacherSql.h"

class StuMgr : public QMainWindow
{
	Q_OBJECT

public:
	StuMgr(QWidget *parent = 0);
	~StuMgr();
	showList sl;
	forgetPwd fp;
	addUser au;

private:
	Ui::StuMgrClass ui;
	QString name;
	QString pwd;
	int lv_id;
	QString db_name;
	SqliteSql s_sql;
	stuSql stusql;
	student stu;
	teacherSql teasql;
	teacher teach;

private slots:
	void login();
	void forget();
	void addNewUser();

};

#endif // STUMGR_H
