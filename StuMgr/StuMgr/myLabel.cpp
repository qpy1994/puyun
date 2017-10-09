#include "myLabel.h"


myLabel::myLabel(QWidget * parent) :QLabel(parent)
{

}

void myLabel::mouseReleaseEvent(QMouseEvent * e)
{
	Q_UNUSED(e)
	emit clicked();
}

myLabel::~myLabel()
{
}
