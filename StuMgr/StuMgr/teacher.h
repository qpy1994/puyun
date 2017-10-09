#pragma once
#include "QString"



class teacher
{
public:
	teacher();
	~teacher();
	QString name;

private:
	int id;
	QString pwd;
	int lv_id;
	int age;
	QString sex;
	QString subjectname;

public:
	void setId(int id);
	int getId();
	void setName(QString name);
	QString getName();
	void setLvid(int lv_id);
	int getLvid();
	void setPwd(QString pwd);
	QString getPwd();
	void setAge(int age);
	int getAge();
	void setSex(QString sex);
	QString getSex();
	void setSubject(QString sub);
	QString getSubject();
};

