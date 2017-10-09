#pragma once
#include "qwidget.h"
#include "qlineedit.h"
class myLineEdit : public QLineEdit
{
public:
	myLineEdit();
	~myLineEdit();
	explicit myLineEdit(QWidget * parent = 0);
	
protected:
	void  mouseDoubleClickEvent(QMouseEvent*);
};

