#pragma once

#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include "QList"


class SqliteSql
{
public:
	SqliteSql();
	~SqliteSql();

private:
	
	QSqlQuery sql_query ;
	bool isflag = false;
	int i = 0;

public:
	QSqlDatabase  db;
	void getSql();
	void closeSql();
	int findMaxId(QString listName);
	QSqlQuery searchSql(QString sql);
};

