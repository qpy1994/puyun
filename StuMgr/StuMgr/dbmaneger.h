#ifndef DBMANEGER_H
#define DBMANEGER_H

#include <QDialog>
#include "ui_dbmaneger.h"
#include "qtablewidget.h"
#include "stuSql.h"
#include "qmessagebox"
#include "qcheckbox.h"
#include "QTableWidget"

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
	QList<int> * Idlist;

private:
	Ui::dbManeger ui;
	//QTableWidget * qtable;
	stuSql ssql;
	QCheckBox * selectId;

private slots:
	void showAllUser();
	void bluSearch();
	void exSearch();
	void closeDB();
	void initDB();
	void writeDB(QList<student> students);
	void initData();
	void delStu();
	void slotitemClicked(QTableWidgetItem * item);
};

#endif // DBMANEGER_H
