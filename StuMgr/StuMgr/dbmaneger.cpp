#include "dbmaneger.h"

#pragma execution_character_set("utf-8")

dbManeger::dbManeger(QWidget *parent)
	: QDialog(parent)
{
	
	ui.setupUi(this);
	ui.tableWidget->setColumnCount(7);
	

	//设置列标题
	QStringList headerLabels;
	headerLabels << "id" << "name"<<"age"<<"sex"<<"class"<<"lv_id"<<"t_id";
	ui.tableWidget->setHorizontalHeaderLabels(headerLabels);

	//设置行内容
// 	QStringList rowLabels;
// 	rowLabels << "Line1" << "Line2" << "Line3" << "Line4";
// 	ui.tableWidget->setVerticalHeaderLabels(rowLabels);
 	ui.tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

	//设置列宽自适应，行高20
// 	ui.tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
// 	for (int i = 0; i < 4; i++){
// 		ui.tableWidget->setRowHeight(i, 20);
// 	}
// 
// 	
// 
// 	for (int row = 0; row < 4; ++row)
// 	{
// 		 QTableWidgetItem *item0, *item1;
// 		 item0 = new QTableWidgetItem();
// 		 item1 = new QTableWidgetItem();
// 		 
// 		 QString txt = QString("%1").arg(row + 1);
// 		 item0->setText(txt);
// 		 ui.tableWidget->setItem(row, 0, item0);
// 		 
// 		 txt = QString("%1").arg((row + 1) * 2);
// 		 item1->setText(txt);
// 		 ui.tableWidget->setItem(row, 1, item1);
// 		 
// 	}

	//设置表格行标题的对齐方式  
//	ui.tableWidget->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
	
//设置表格行标题  
// 	QStringList headerLabels;
// 	headerLabels << "C1" << "C2";
// 	table->setHorizontalHeaderLabels(headerLabels);
// 
// 
// 	//设置表格行标题的对齐方式  
// 	table->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
// 
// 	//设置行表题  
// 	QStringList rowLabels;
// 	rowLabels << "Line1" << "Line2" << "Line3" << "Line4";
// 	table->setVerticalHeaderLabels(rowLabels);
// 
// 
// 	//设置每一行的高度  
// 	for (int i = 0; i < 4; i++)
// 		table->setRowHeight(i, 22);
// 
// 	//自动调整最后一列的宽度使它和表格的右边界对齐  
// 	table->horizontalHeader()->setStretchLastSection(true);
// 
// 	//设置表格的选择方式  
// 	table->setSelectionBehavior(QAbstractItemView::SelectItems);
// 
// 	//设置编辑方式  
// 	table->setEditTriggers(QAbstractItemView::DoubleClicked);
// 
// 	//设置表格的内容  
// 	for (int row = 0; row < 4; ++row)
// 	{
// 		QTableWidgetItem *item0, *item1;
// 		item0 = new QTableWidgetItem;
// 		item1 = new QTableWidgetItem;
// 
// 		QString txt = QString("%1").arg(row + 1);
// 		item0->setText(txt);
// 		table->setItem(row, 0, item0);
// 
// 		txt = QString("%1").arg((row + 1) * 2);
// 		item1->setText(txt);
// 		table->setItem(row, 1, item1);
// 
// 	}
// 
// 	//增加一行  
// 	table->setRowCount(5);
// 	QTableWidgetItem *vHeader5 = new QTableWidgetItem("Line5");
// 	table->setVerticalHeaderItem(4, vHeader5);
// 
// 	QTableWidgetItem *item5_0, *item5_1;
// 	item5_0 = new QTableWidgetItem;
// 	item5_1 = new QTableWidgetItem;
// 	item5_0->setText(QString("%1").arg(5));
// 	item5_1->setText(QString("%1").arg(5 * 2));
// 	table->setItem(4, 0, item5_0);
// 	table->setItem(4, 1, item5_1);
	
	
	connect(ui.showbtn, SIGNAL(clicked()), this, SLOT(showAllUser()));
	connect(ui.blursearch, SIGNAL(clicked()), this, SLOT(bluSearch()));
	connect(ui.exactsearch, SIGNAL(clicked()), this, SLOT(exSearch()));
}

dbManeger::~dbManeger()
{

}

void dbManeger::showAllUser(){
	QList<student> students = ssql.showAllStu();
	ui.tableWidget->setRowCount(students.size());
	for (int i = 0; i < students.size();i++)
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

void dbManeger::bluSearch(){
	int id = ui.idedit->text().toInt();
	QString name = ui.nameedit->text();
	QString classname = ui.classedit->text();
	QList<student> students = ssql.showAllStu();
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

		QString txt = QString(students[i].getId());
		item0->setText(txt);
		ui.tableWidget->setItem(i, 0, item0);

		txt = students[i].getName();
		item1->setText(txt);
		ui.tableWidget->setItem(i, 1, item1);

		txt = QString(students[i].getAge());
		item2->setText(txt);
		ui.tableWidget->setItem(i, 2, item2);

		txt = students[i].getSex();
		item3->setText(txt);
		ui.tableWidget->setItem(i, 3, item3);

		txt = students[i].getClassname();
		item4->setText(txt);
		ui.tableWidget->setItem(i, 4, item4);

		txt = QString(students[i].getLvid());
		item5->setText(txt);
		ui.tableWidget->setItem(i, 5, item5);

		txt = QString(students[i].getTid());
		item6->setText(txt);
		ui.tableWidget->setItem(i, 6, item6);
	}
}

void dbManeger::exSearch(){}

void dbManeger::closeDB(){}