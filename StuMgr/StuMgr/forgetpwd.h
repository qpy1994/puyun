#ifndef FORGETPWD_H
#define FORGETPWD_H

#include <QDialog>
#include "ui_forgetpwd.h"
#include "QMessageBox"
#include "stuSql.h"

class forgetPwd : public QDialog
{
	Q_OBJECT

public:
	forgetPwd(QWidget *parent = 0);
	~forgetPwd();

private:
	Ui::forgetPwd ui;
	stuSql stusql;
	int errorId = 0;
	student stu;
	bool flag = true;

private slots:
	void editPwd();
	void changePwd();
	
};

#endif // FORGETPWD_H
