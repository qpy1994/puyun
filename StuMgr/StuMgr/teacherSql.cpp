#include "teacherSql.h"
#include "QMessageBox"


teacherSql::teacherSql()
{
}


teacherSql::~teacherSql()
{
}

int teacherSql::editPwd(int id, QString pwd){
	int num = -1;
	QString sql = "update teacher set pwd='" + pwd + "'" + "where id=" + QString::number(id);
	s_sql.getSql();
	query = QSqlQuery::QSqlQuery(s_sql.db);
	if (!query.exec(sql)){
		qDebug() << "can not edit teacher password!";
		num = 0;
	}
	else
	{
		qDebug() << "change teacher password success!";
		num = 1;
	}
	return num;
}

QList<QString> teacherSql::safequestion(int id){
	
	QList<QString> list;
	QString question;
	QString answer;
	s_sql.getSql();
	query = QSqlQuery::QSqlQuery(s_sql.db);
	QString sql = "select * from t_safe_question where id=" + QString::number(id);
	if (!query.exec(sql))
	{
		qDebug() << "teacher question search fail";
	}
	else
	{
		while (query.next())
		{
			question = query.value("question").toString();
			answer = query.value("answer").toString();
			if ((!question.isEmpty()) && (!answer.isEmpty()))
			{
				list.append(question);
				list.append(answer);
			}
		}
	}
	return list;
	
}

teacher teacherSql::teacherlogin(QString name, QString pwd){
	
	QString sql = "select * from teacher where name='" + name + "' and pwd ='"
		+ pwd + "'";
	s_sql.getSql();
	query = QSqlQuery::QSqlQuery(s_sql.db);
	teacher myteacher;
	if (!query.exec(sql))
	{
		qDebug() << "login faild!";
		
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
	
	QString sql = "select * from teacher where id=" +QString::number(tid);
	s_sql.getSql();
	QSqlQuery query = s_sql.searchSql(sql);
	teacher myteacher;
	if (!query.exec())
	{
		qDebug() << "can not find teacher";
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
	
	return myteacher;
}

int teacherSql::addteacher(teacher newteacher){
	int num = 0;
	QString sql = "insert into teacher (id,name,pwd,age,sex,subject) values(?,?,?,?,?,?)";
	s_sql.getSql();
	query = QSqlQuery::QSqlQuery(s_sql.db);
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
	//s_sql.closeSql();
	return num;
}

int teacherSql::editTeacher(teacher t){
	int num = -1;
	QString sql = "update teacher set name=:name,age=:age,sex=:sex,subject=:subject where id=:id";
	s_sql.getSql();
	query = QSqlQuery::QSqlQuery(s_sql.db);
	query.prepare(sql);
	query.bindValue(":name", t.getName());
	//query.bindValue(":pwd", cstu.getPwd());
	query.bindValue(":age", t.getAge());
	query.bindValue(":sex", t.getSex());
	query.bindValue(":subject", t.getSubject());
	//query.bindValue(":t_id", cstu.getTid());
	query.bindValue(":id", t.getId());
	if (!query.exec())
	{
		qDebug() << "update teacher faild";
		num = -1;
	}
	else
	{
		num = 1;
	}
	return num;
}