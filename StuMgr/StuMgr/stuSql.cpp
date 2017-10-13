#include "stuSql.h"
#include "QMessageBox"
#pragma execution_character_set("utf-8")
stuSql::stuSql()
{

}


stuSql::~stuSql()
{
}

//修改密码
int stuSql::editPwd(int id,QString pwd){
	int num = -1;
	QString sql = "update student set pwd='"+pwd+"'"+"where id="+QString::number(id);
	s_sql.getSql();
	query = QSqlQuery::QSqlQuery(s_sql.db);
	if (!query.exec(sql)){
		qDebug() << "can not edit student password!";
		num = 0;
	}
	else
	{
		qDebug() << "change student password success!";
		num = 1;
	}
	return num;
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
	QString sql = "insert into student (id,name,pwd,age,sex,class,t_id) values(?,?,?,?,?,?,?)";
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
	//s_sql.closeSql();
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
//	s_sql.closeSql();
	return num;
}

//修改学生信息
int stuSql::changeStu(student cstu){
	int num = 0;
	QString sql = "update student set name = :name,age = :age,sex = :sex,class = :class  where id = :id";
	s_sql.getSql();
	query = QSqlQuery::QSqlQuery(s_sql.db);
	query.prepare(sql);
	query.bindValue(":name", cstu.getName());
	//query.bindValue(":pwd", cstu.getPwd());
	query.bindValue(":age", cstu.getAge());
	query.bindValue(":sex", cstu.getSex());
	query.bindValue(":class", cstu.getClassname());
	//query.bindValue(":t_id", cstu.getTid());
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
	//s_sql.closeSql();
	return num;
}

//查找全部学生
QList<student> stuSql::showAllStu(){
	QList<student> stuList;
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
QList<student> stuSql::sluSearch(int id,QString name,QString classname,int tid){
	
	QString sql;
	if (id==0&&name==""&&classname==""&&tid==0)
	{
		sql = "select * from student";
	}
	else{
		sql = "select * from student where name = '" + name + "'or id = " + QString::number(id) + " or class = '" + classname
			+ "'or t_id = " + QString::number(tid);
	}
	qDebug() << sql;

	QList<student> stuList;
	s_sql.getSql();
	query = QSqlQuery::QSqlQuery(s_sql.db);
	//query.prepare(sql);
	if (!query.exec(sql))
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
QList<student> stuSql::exactSearch(int id, QString name, QString classname, int tid){
	
	int i = 0;
	QString sql;
	QList<student> stuList;
	if (id == 0 && name == ""&&classname == ""&&tid == 0)
	{
		return stuList;
	}
	else{
		int i = 0;

		sql = "select * from student where id =";

		if (id==0)
		{
			sql += "0 or ";
		} 
		else
		{
			sql += QString::number(id);
			i = 1;
		}

		if (name == "")
		{
			if (i==1)
			{
				sql += " or name ='' or ";
			} 
			else
			{
				sql += "name ='' or ";
			}
			
		}
		else
		{
			if (i==1)
			{
				sql += " and  name ='" + name + "' ";
				
			}
			else{
				sql += "   name ='" + name + "' ";
			}
			
			i = 2;
		}

		if (classname == "")
		{
			if (i==2)
			{
				sql += " or class ='' or ";
			} 
			else
			{
				sql += "class ='' or ";
			}
			
		}
		else
		{
			if (i==2)
			{
				sql += " and class ='" + classname + "' ";
			} 
			else
			{
				sql += "class='" + classname + "' ";
			}
			
			i = 3;
		}

		if (tid == 0)
		{
			if (i==3)
			{
				sql += "or t_id = 0 ";
			} 
			else
			{
				sql += "t_id = 0 ";
			}
			
		}
		else
		{
			if (i>0)
			{
				sql += "and t_id =" + QString::number(tid);
			} 
			else
			{
				sql += " t_id = " + QString::number(tid);
			}
		}
	//	sql = "select * from student where name = '" + name + "'or id = " + QString::number(id) + " or class = '" + classname
	//		+ "'or t_id = " + QString::number(tid);
	}
	qDebug() << sql;
	
	s_sql.getSql();
	query = QSqlQuery::QSqlQuery(s_sql.db);
	//query.prepare(sql);
	if (!query.exec(sql))
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

QList<QString> stuSql::safeQuestion(int id){
	QList<QString> list;
	QString question,answer;
	s_sql.getSql();
	query = QSqlQuery::QSqlQuery(s_sql.db);
	QString sql = "select * from stu_safe_question where id=" + QString::number(id);
	if (!query.exec(sql))
	{
		qDebug() << "student question search fail";
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

int stuSql::findTid(int id){
	int tid = 0;
	s_sql.getSql();
	query = QSqlQuery::QSqlQuery(s_sql.db);
	QString sql = "select * from student where id=" + QString::number(id);
	if (!query.exec(sql))
	{
		qDebug() << "student  search fail";
	}
	else
	{
		
		while (query.next())
		{
			tid = query.value("t_id").toInt();
		
		}
	}
	return tid;
}