#ifndef SHOWTEACHER_H
#define SHOWTEACHER_H

#include <QDialog>
#include "ui_showteacher.h"

class showTeacher : public QDialog
{
	Q_OBJECT

public:
	showTeacher(QWidget *parent = 0);
	~showTeacher();

public:
	Ui::showTeacher ui;
};

#endif // SHOWTEACHER_H
