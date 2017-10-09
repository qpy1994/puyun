#include "myLineEdit.h"


myLineEdit::myLineEdit(QWidget * parent) :QLineEdit(parent)
{
	//myLineEdit::placeholderText();
}


myLineEdit::~myLineEdit()
{
}

void myLineEdit::mouseDoubleClickEvent(QMouseEvent *event) {
	
	myLineEdit::setReadOnly(false);
	
}
