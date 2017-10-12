#ifndef DBMANEGER_H
#define DBMANEGER_H

#include <QDialog>
#include "ui_dbmaneger.h"
#include "qtablewidget.h"
#include "stuSql.h"
#include "qmessagebox"

class dbManeger : public QDialog
{
	Q_OBJECT

public:
	dbManeger(QWidget *parent = 0);
	~dbManeger();

public:
	int id;
	QString name;
	QString classname;
	int tid;

private:
	Ui::dbManeger ui;
	//QTableWidget * qtable;
	stuSql ssql;

private slots:
	void showAllUser();
	void bluSearch();
	void exSearch();
	void closeDB();
	void initDB();
	void writeDB(QList<student> students);
	void initData();
};

#endif // DBMANEGER_H
