#ifndef CHANGEPWD_H
#define CHANGEPWD_H

#include <QDialog>
#include "ui_changepwd.h"
#include "QMessageBox"
#include "stuSql.h"
#include "teacherSql.h"

class changePwd : public QDialog
{
	Q_OBJECT

public:
	changePwd(QWidget *parent = 0);
	~changePwd();
	int id = -1;
	QString type="null";
	void initEdit();

private:
	Ui::changePwd ui;
	stuSql ssql;
	teacherSql tsql;

private slots:
	void editPwd();
	bool PwdCheck();
	
};

#endif // CHANGEPWD_H
