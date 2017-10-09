#ifndef SHOWLIST_H
#define SHOWLIST_H

#include <QDialog>
#include "ui_showlist.h"
#include "QPixmap"
#include "myLineEdit.h"
#include "dbmaneger.h"
class showList : public QDialog
{
	Q_OBJECT

public:
	showList(QWidget *parent = 0);
	~showList();
	Ui::showList ui;
	bool flag = false;
	dbManeger dbm;

private slots:
	void infoEdit();
	void closeEdit();
	void saveEdit();
	void dbEdit();
	
};

#endif // SHOWLIST_H
