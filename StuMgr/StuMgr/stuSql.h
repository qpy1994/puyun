#pragma once
#include "student.h"
#include "SqliteSql.h"
#include "QList"
#include "qdebug.h"

class stuSql
{
public:
	stuSql();
	~stuSql();
private:
	
	SqliteSql s_sql;
	QSqlQuery query;
	QList<student>  stuList;
public:
	student  stu;
    student stu_login(QString name,QString pwd);
	int insertStu(student addstu);
	int deleteStu(int sid);
	int changeStu(student cstu);
	QList<student> showAllStu();
	QList<student> sluSearch(int id, QString name, QString classname, int tid);
	QList<student> exactSearch(int id,QString name,QString classname,int tid);
	QList<QString> safeQuestion(int id);
	int editPwd(int id,QString pwd);
};

