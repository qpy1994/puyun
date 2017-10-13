#ifndef USERAPPEAL_H
#define USERAPPEAL_H

#include <QDialog>
#include "ui_userappeal.h"
#include "SqliteSql.h"
#include "QMessageBox"
#include <QTimer>  
#include <qdatetime.h>

class UserAppeal : public QDialog
{
	Q_OBJECT

public:
	UserAppeal(QWidget *parent = 0);
	~UserAppeal();

private:
	Ui::UserAppeal ui;
	SqliteSql *ssql;

private slots:
	void addAppeal();
	bool checkData();
};

#endif // USERAPPEAL_H
