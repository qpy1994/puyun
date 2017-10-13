#pragma once
#include "teacher.h"
#include "SqliteSql.h"

class teacherSql
{
public:
	teacherSql();
	~teacherSql();

private:
	
	SqliteSql s_sql;
	QSqlQuery query;
	

public:
	teacher  myteacher;
	teacher teacherlogin(QString name,QString pwd);
	teacher findteacher(int tid);
	int addteacher(teacher newteacher);
	QList<QString> safequestion(int id);
	int editPwd(int id, QString pwd);
	int editTeacher(teacher t);
};

