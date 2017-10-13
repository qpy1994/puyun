#include "showteacher.h"

showTeacher::showTeacher(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.comboBox->setEditable(false);
}

showTeacher::~showTeacher()
{

}
