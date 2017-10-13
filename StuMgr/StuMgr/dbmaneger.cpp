#include "dbmaneger.h"

#pragma execution_character_set("utf-8")

dbManeger::dbManeger(QWidget *parent)
	: QDialog(parent)
{
	
	ui.setupUi(this);
	initDB();

	connect(ui.showbtn, SIGNAL(clicked()), this, SLOT(showAllUser()));
	connect(ui.blursearch, SIGNAL(clicked()), this, SLOT(bluSearch()));
	connect(ui.exactsearch, SIGNAL(clicked()), this, SLOT(exSearch()));
}

dbManeger::~dbManeger()
{

}

//初始化列表
void dbManeger::initDB(){
	ui.tableWidget->clear();
	ui.tableWidget->setColumnCount(7);
	//设置列标题
	QStringList headerLabels;
	headerLabels << "id" << "name" << "age" << "sex" << "class" << "lv_id" << "t_id";
	ui.tableWidget->setHorizontalHeaderLabels(headerLabels);
	ui.tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
	ui.tableWidget->setRowCount(0);
	ui.tableWidget->horizontalHeader()->setStretchLastSection(true); //就是这个地方
	ui.tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void dbManeger::writeDB(QList<student> students){

	ui.tableWidget->setRowCount(students.size());
	for (int i = 0; i < students.size(); i++)
	{

		QTableWidgetItem *item0, *item1, *item2, *item3, *item4, *item5, *item6;
		item0 = new QTableWidgetItem();
		item1 = new QTableWidgetItem();
		item2 = new QTableWidgetItem();
		item3 = new QTableWidgetItem();
		item4 = new QTableWidgetItem();
		item5 = new QTableWidgetItem();
		item6 = new QTableWidgetItem();

		QString txt = QString::number(students[i].getId());
		item0->setText(txt);
		ui.tableWidget->setItem(i, 0, item0);

		txt = students[i].getName();
		item1->setText(txt);
		ui.tableWidget->setItem(i, 1, item1);

		txt = QString::number(students[i].getAge());
		item2->setText(txt);
		ui.tableWidget->setItem(i, 2, item2);

		txt = students[i].getSex();
		item3->setText(txt);
		ui.tableWidget->setItem(i, 3, item3);

		txt = students[i].getClassname();
		item4->setText(txt);
		ui.tableWidget->setItem(i, 4, item4);

		txt = QString::number(students[i].getLvid());
		item5->setText(txt);
		ui.tableWidget->setItem(i, 5, item5);

		txt = QString::number(students[i].getTid());
		item6->setText(txt);
		ui.tableWidget->setItem(i, 6, item6);
	}
}

 void dbManeger::initData(){
	 id = 0, name = "",classname ="",tid = 0;
	 if (ui.idedit->text().isEmpty())
	 {
		 id = 0;
	 }
	 else
	 {
		 id = ui.idedit->text().toInt();
	 }

	 if (ui.nameedit->text().isEmpty())
	 {
		 name = "";
	 }
	 else
	 {
		 name = ui.nameedit->text();
	 }

	 if (ui.classedit->text().isEmpty())
	 {
		 classname = "";
	 }
	 else
	 {
		 classname = ui.classedit->text();
	 }

	 if (ui.teacheredit->text().isEmpty())
	 {
		 tid = 0;
	 }
	 else
	 {
		 tid = ui.teacheredit->text().toInt();
	 }
 }

void dbManeger::showAllUser(){
	initDB();
	QList<student> students = ssql.showAllStu();
	writeDB(students);
}

void dbManeger::bluSearch(){
	initDB();
	initData();
	QList<student> students = ssql.sluSearch(id,name,classname,tid);
	writeDB(students);
	
}

void dbManeger::exSearch(){
	initData();
	if (id == 0 && name == ""&&classname == ""&&tid == 0)
	{
		QMessageBox::warning(NULL, "warning", "搜索条件不能为空！", QMessageBox::Yes | QMessageBox::NoButton, QMessageBox::NoButton);
	}
	else
	{

	QList<student> students = ssql.exactSearch(id, name, classname, tid);
	if (students.size()<1)
	{
		QMessageBox::warning(NULL, "warning", "查无此人！", QMessageBox::Yes | QMessageBox::NoButton, QMessageBox::NoButton);
		initDB();
	} 
	else
	{
		writeDB(students);
	}
	}
}

void dbManeger::closeDB(){}