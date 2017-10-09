#ifndef ADDUSER_H
#define ADDUSER_H

#include <QDialog>
#include "ui_adduser.h"

class addUser : public QDialog
{
	Q_OBJECT

public:
	addUser(QWidget *parent = 0);
	~addUser();



private:
	Ui::addUser ui;
};

#endif // ADDUSER_H
