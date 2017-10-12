#ifndef ADDUSER_H
#define ADDUSER_H

#include <QDialog>
#include "ui_adduser.h"
#include "qmessagebox.h"
#include "stuSql.h"
#include "teacherSql.h"

class addUser : public QDialog
{
	Q_OBJECT

public:
	addUser(QWidget *parent = 0);
	~addUser();
	Ui::addUser ui;

private:
	stuSql ssql;
	teacherSql tsql;

private slots:
	void closeAddUser();
	void addNewUser();
	bool isCheckAdd();
};

#endif // ADDUSER_H
