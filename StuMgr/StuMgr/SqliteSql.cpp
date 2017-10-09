#include "SqliteSql.h"


SqliteSql::SqliteSql()
{
	
}


SqliteSql::~SqliteSql()
{
}

//设置连接，打开数据库

void SqliteSql::getSql()
{
	db = QSqlDatabase::database("qt_sql_default_connection");
	db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("stumgr.db");
	//db.setUserName("QinPuYun");
	
	if (!db.open())
	{
		qDebug() << "database do not open!--->" <<db.lastError();
	} 
	else
	{
		isflag = true;
		qDebug() << "database  open success!--->" ;
	}
	
}

//关闭数据库

void SqliteSql::closeSql()
{
	if (isflag)
	{
		db.close();
		qDebug() << "database closed!" ;
	} 
	else
	{
		qDebug() << "database close faild!--->";
	}
}


 


//查询最大id
 
int SqliteSql::findMaxId(QString listName)
{
	int num = 0;
	if (isflag)
	{
		QString sql = "select max(id) from " + listName;
		sql_query.prepare(sql);
		if (!sql_query.exec())
		{
			qDebug() << sql_query.lastError();
		}
		else
		{
			qDebug() << "search max_id success!";
			num = sql_query.value(0).toInt();;
		}
	} 
	else
	{
		i++;
		getSql();
		findMaxId(listName);
		if (i > 2)
		{
			qDebug() << "database can not open!";
			i = 0;
			return 0;
		}
	}
	
	return num;
}

QSqlQuery SqliteSql::searchSql(QString sql){
	getSql();
	sql_query = QSqlQuery::QSqlQuery(db);
	sql_query.exec(sql);
	if (!sql_query.exec(sql))
	{
		qDebug() << "search faild!";
	} 
	
		return sql_query;
}

