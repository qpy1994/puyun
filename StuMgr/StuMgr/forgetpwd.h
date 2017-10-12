#ifndef FORGETPWD_H
#define FORGETPWD_H

#include <QDialog>
#include "ui_forgetpwd.h"
#include "QMessageBox"
#include "stuSql.h"
#include "userappeal.h"
#include "teacherSql.h"
#include "safequestion.h"

class forgetPwd : public QDialog
{
	Q_OBJECT

public:
	forgetPwd(QWidget *parent = 0);
	~forgetPwd();

private:
	Ui::forgetPwd ui;
	stuSql stusql;
	teacherSql tsql;
	UserAppeal *ua;
	safeQuestion *sq;

private slots:
	void UserAppealing();
	void editPwd();
	
};

#endif // FORGETPWD_H
