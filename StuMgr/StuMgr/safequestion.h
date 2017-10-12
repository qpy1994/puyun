#ifndef SAFEQUESTION_H
#define SAFEQUESTION_H

#include <QDialog>
#include "ui_safequestion.h"
#include "qdebug.h"
#include "QMessageBox"
#include "teacherSql.h"
#include "stuSql.h"
#include "changepwd.h"

class safeQuestion : public QDialog
{
	Q_OBJECT

public:
	safeQuestion(QWidget *parent = 0);
	~safeQuestion();

private:
	Ui::safeQuestion ui;
	stuSql ssql;
	teacherSql tsql;
	QString answer;
	changePwd *cp;

private slots:
	void safeCheck();
	void showQuestion();
	
};

#endif // SAFEQUESTION_H
