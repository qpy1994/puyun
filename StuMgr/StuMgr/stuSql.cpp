#include "stuSql.h"
#include "QMessageBox"
#pragma execution_character_set("utf-8")
stuSql::stuSql()
{

}


stuSql::~stuSql()
{
}

//学生登录
student stuSql::stu_login(QString name,QString pwd){
	
	QString sql = "select * from student where name= '" + name + "' and pwd = '" +pwd+"'" ;
	s_sql.getSql();
	query = QSqlQuery::QSqlQuery(s_sql.db);
	if (!query.exec(sql))
	{
		qDebug() << "can not find student";
		stu = student();
	} 
	else
	{
		while (query.next())
		{
			stu.setId(query.value("id").toInt());
			stu.setName(query.value("name").toString());
			stu.setPwd(query.value("pwd").toString());
			stu.setAge(query.value("age").toInt());
			stu.setClassname(query.value("class").toString());
			stu.setLvid(query.value("lv_id").toInt());
			stu.setTid(query.value("t_id").toInt());
			stu.setSex(query.value("sex").toString());
		}
	}
	

	//s_sql.closeSql();
	return stu;
}

//增加学生名单
int stuSql::insertStu(student addstu){
	int num = 0;
	QString sql = "insert into student (id,name,pwd,age,sex,class,t_id) valuse(?,?,?,?,?,?,?)";
	s_sql.getSql();
	query = QSqlQuery::QSqlQuery(s_sql.db);
	query.prepare(sql);
	if (addstu.getId()==0)
	{
		query.addBindValue(s_sql.findMaxId("student"));
	} 
	else
	{
		query.addBindValue(addstu.getId());
	}
	query.addBindValue(addstu.getName());
	query.addBindValue(addstu.getPwd());
	query.addBindValue(addstu.getAge());
	query.addBindValue(addstu.getSex());
	query.addBindValue(addstu.getClassname());
	query.addBindValue(addstu.getTid());
	if (!query.exec())
	{
		qDebug() <<"insert student faild";
		num = -1;
	} 
	else
	{
		num = 1;
	}
	return num;
}

//删除学生
int stuSql::deleteStu(int sid){
	int num = 0;
	QString sql = "delete  from student where id = " + sid;
	s_sql.getSql();
	query = QSqlQuery::QSqlQuery(s_sql.db);
	query.prepare(sql);
	if (!query.exec())
	{
		qDebug() << "delete student faild";
		num = -1;
	}
	else
	{
		num = 1;
	}
	s_sql.closeSql();
	return num;
}

//修改学生信息
int stuSql::changeStu(student cstu){
	int num = 0;
	QString sql = "update student set name = :name,pwd = :pwd,age = :age,sex = :sex,class = :class,t_id = :tid  where id = :id";
	s_sql.getSql();
	query = QSqlQuery::QSqlQuery(s_sql.db);
	query.prepare(sql);
	query.bindValue(":name", cstu.getName());
	query.bindValue(":pwd", cstu.getPwd());
	query.bindValue(":age", cstu.getAge());
	query.bindValue(":sex", cstu.getSex());
	query.bindValue(":class", cstu.getClassname());
	query.bindValue(":t_id", cstu.getTid());
	query.bindValue(":id", cstu.getId());
	if (!query.exec())
	{
		qDebug() << "update student faild";
		num = -1;
	}
	else
	{
		num = 1;
	}
	return num;
}

//查找全部学生
QList<student> stuSql::showAllStu(){
	
	QString sql = "select * from student";
	s_sql.getSql();
	query = QSqlQuery::QSqlQuery(s_sql.db);
	//query.prepare(sql);
	if (!query.exec(sql))
	{
		
		qDebug() << "show all student faild!";
	} 
	else
	{
		
		while (query.next())
		{
			
			student showStu;
			showStu.setId(query.value("id").toInt());
			showStu.setName(query.value("name").toString());
			showStu.setAge(query.value("age").toInt());
			showStu.setSex(query.value("sex").toString());
			showStu.setClassname(query.value("class").toString());
			showStu.setTid(query.value("t_id").toInt());
			stuList.append(showStu);
		}
	}
	return stuList;
}

//模糊查询
QList<student> stuSql::sluSearch(student sluStu){
	int i = 0;
	
	QString sql = "select * from student where\t";

	if (sluStu.getId() > 0)
	{
		sql += "id = " + sluStu.getId();
		sql += "\t or \t";
	}
	else{

		i++;
	}

	if (sluStu.getName().isEmpty())
	{
		i++;
	}
	else{
		sql += "name = '" + sluStu.getName()+"',or\t";
	}

	
	if (sluStu.getClassname().isEmpty())
	{
		i++;
	}
	else{
		sql += "class = '" + sluStu.getClassname() + "',or\t";
	}
	if (sluStu.getTid()>0)
	{
		sql += "t_id = " + sluStu.getTid();
	} 
	else
	{
		i++;
	}
	if (i==4)
	{
		sql += "1=1";
	}
	s_sql.getSql();
	query = QSqlQuery::QSqlQuery(s_sql.db);
	//query.prepare(sql);
	if (query.exec(sql))
	{
		qDebug() << "search student faild!";
	}
	else
	{

		while (query.next())
		{

			student showStu;
			showStu.setId(query.value("id").toInt());
			showStu.setName(query.value("name").toString());
			showStu.setAge(query.value("age").toInt());
			showStu.setSex(query.value("sex").toString());
			showStu.setClassname(query.value("class").toString());
			showStu.setTid(query.value("t_id").toInt());
			stuList.append(showStu);
		}
	}
	return stuList;
}

//精确查询
QList<student> stuSql::exactSearch(student sluStu){
	int i = 0;
	//stuList = new QList < student > ;
	QString sql = "select * from student where\t";

	if (sluStu.getId() > 0)
	{
		sql += "id = " + sluStu.getId();
		sql += "\t and \t";
	}
	else{

		i++;
	}

	if (sluStu.getName() == "")
	{
		i++;
	}
	else{
		sql += "name = '" + sluStu.getName() + "',and\t";
	}


	if (sluStu.getClassname() == "")
	{
		i++;
	}
	else{
		sql += "class = '" + sluStu.getClassname() + "',and\t";
	}
	if (sluStu.getTid() > 0)
	{
		sql += "t_id = " + sluStu.getTid();
	}
	else
	{
		i++;
	}
	if (i == 0)
	{
		
			return stuList;
	}
	s_sql.getSql();
	query = QSqlQuery(s_sql.db);
	//query.prepare(sql);
	if (query.exec(sql))
	{
		qDebug() << "search student faild!";
	}
	else
	{

		while (query.next())
		{

			student showStu;
			showStu.setId(query.value("id").toInt());
			showStu.setName(query.value("name").toString());
			showStu.setAge(query.value("age").toInt());
			showStu.setSex(query.value("sex").toString());
			showStu.setClassname(query.value("class").toString());
			showStu.setTid(query.value("t_id").toInt());
			stuList.append(showStu);
		}
	}
	return stuList;
}