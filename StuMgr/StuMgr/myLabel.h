#pragma once
#include "qlabel.h"
class myLabel :public QLabel
{
	Q_OBJECT
public:
	myLabel(QWidget * parent = 0);
	~myLabel();

protected:
	virtual void mouseReleaseEvent(QMouseEvent * e);
signals:
	void clicked(void);
};

