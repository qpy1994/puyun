#pragma once
#include "QString"
class student
{
public:
	student();
	~student();
	QString  name;

private:
	int  id;
	
	QString   pwd;
	int  lv_id=1;
	int  age;
	QString  sex;
	QString  classname;
	int  t_id;

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
	void setClassname(QString classname);
	QString getClassname();
	void setTid(int t_id);
	int getTid();
};

