#ifndef CHOOSETYPE_H
#define CHOOSETYPE_H

#include <QDialog>
#include "ui_choosetype.h"
#include "adduser.h"
#include "QMessageBox"

class chooseType : public QDialog
{
	Q_OBJECT

public:
	chooseType(QWidget *parent = 0);
	~chooseType();
	addUser *au;

private slots:
	void openAu();

private:
	Ui::chooseType ui;
};

#endif // CHOOSETYPE_H
