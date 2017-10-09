#include "student.h"


student::student() 
{
	//name = "";
}


student::~student()
{
}

void student::setId(int id){ this->id = id; }

int student::getId(){ return this->id; }

void student::setName(QString name){ this->name = name; }

QString student::getName(){ return this->name; }

void student::setLvid(int lv_id){ this->lv_id = lv_id; }

int student::getLvid(){ return this->lv_id; }

void student::setPwd(QString pwd){ this->pwd = pwd; }

QString student::getPwd(){ return this->pwd; }

void student::setAge(int age){ this->age = age; }

int student::getAge(){ return this->age; }

void student::setSex(QString sex){ this->sex = sex; }

QString student::getSex(){ return this->sex; }

void student::setClassname(QString classname){ this->classname = classname; }

QString student::getClassname(){ return this->classname; }

void student::setTid(int t_id){ this->t_id = t_id; }

int student::getTid(){ return this->t_id; }