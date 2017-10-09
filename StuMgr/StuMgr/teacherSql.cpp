#include "teacherSql.h"
#include "QMessageBox"


teacherSql::teacherSql()
{
}


teacherSql::~teacherSql()
{
}

teacher teacherSql::teacherlogin(QString name, QString pwd){
	
	QString sql = "select * from teacher where name='" + name + "' and pwd ='"
		+ pwd + "'";
	s_sql.getSql();
	query = QSqlQuery::QSqlQuery(s_sql.db);
	if (!query.exec(sql))
	{
		qDebug() << "login faild!";
		myteacher = teacher();
	}
	else
	{
		while (query.next())
		{
			myteacher.setId(query.value("id").toInt());
			myteacher.setName(query.value("name").toString());
			myteacher.setPwd(query.value("pwd").toString());
			myteacher.setAge(query.value("age").toInt());
			myteacher.setLvid(query.value("lv_id").toInt());
			myteacher.setSubject(query.value("subject").toString());
			myteacher.setSex(query.value("sex").toString());
		}
	}
	qDebug() << myteacher.getName();
	qDebug() << myteacher.getPwd();
	return myteacher;
}

teacher teacherSql::findteacher(int tid){
	
	QString sql = "select * from teacher where id=" + tid;
	s_sql.getSql();
	s_sql.searchSql(sql);
	if (!s_sql.searchSql(sql).exec())
	{
		qDebug() << "can not find teacher";
	}
	else
	{
		while (s_sql.searchSql(sql).next())
		{
			myteacher.setId(s_sql.searchSql(sql).value("id").toInt());
			myteacher.setName(s_sql.searchSql(sql).value("name").toString());
			myteacher.setPwd(s_sql.searchSql(sql).value("pwd").toString());
			myteacher.setAge(s_sql.searchSql(sql).value("age").toInt());
			myteacher.setLvid(s_sql.searchSql(sql).value("lv_id").toInt());
			myteacher.setSubject(s_sql.searchSql(sql).value("subject").toString());
			myteacher.setSex(s_sql.searchSql(sql).value("sex").toString());
		}
	}
	
	return myteacher;
}

int teacherSql::addteacher(teacher newteacher){
	int num = 0;
	QString sql = "insert into teacher (id,name,pwd,age,sex,subject) valuse(?,?,?,?,?,?)";
	s_sql.getSql();
	query = QSqlQuery("MyDataBase.db");
	query.prepare(sql);
	if (newteacher.getId() == 0)
	{
		query.addBindValue(s_sql.findMaxId("teacher"));
	}
	else
	{
		query.addBindValue(newteacher.getId());
	}
	query.addBindValue(newteacher.getName());
	query.addBindValue(newteacher.getPwd());
	query.addBindValue(newteacher.getAge());
	query.addBindValue(newteacher.getSex());
	query.addBindValue(newteacher.getSubject());
	
	if (!query.exec())
	{
		qDebug() << "insert teacher faild";
		num = -1;
	}
	else
	{
		num = 1;
	}
	s_sql.closeSql();
	return num;
}