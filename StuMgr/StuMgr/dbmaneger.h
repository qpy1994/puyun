#ifndef DBMANEGER_H
#define DBMANEGER_H

#include <QDialog>
#include "ui_dbmaneger.h"
#include "qtablewidget.h"
#include "stuSql.h"

class dbManeger : public QDialog
{
	Q_OBJECT

public:
	dbManeger(QWidget *parent = 0);
	~dbManeger();

private:
	Ui::dbManeger ui;
	//QTableWidget * qtable;
	stuSql ssql;

private slots:
	void showAllUser();
	void bluSearch();
	void exSearch();
	void closeDB();
};

#endif // DBMANEGER_H
