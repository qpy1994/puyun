#ifndef SHOWLIST_H
#define SHOWLIST_H

#include <QDialog>
#include "ui_showlist.h"
#include "QPixmap"
#include "myLineEdit.h"
#include "dbmaneger.h"
#include "qdebug.h"
#include "teacherSql.h"
#include "showteacher.h"

class showList : public QDialog
{
	Q_OBJECT

public:
	showList(QWidget *parent = 0);
	~showList();
	Ui::showList ui;
	bool flag = false;
	dbManeger dbm;
	showTeacher *st;

private slots:
	void infoEdit();
	void closeEdit();
	bool checkNull();
	void dbEdit();
	void initEdit();
	void changeBtn();
	void showMyTeacher();
};

#endif // SHOWLIST_H
