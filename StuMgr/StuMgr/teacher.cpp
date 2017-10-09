#include "teacher.h"


teacher::teacher()
{
	//name = "";
}


teacher::~teacher()
{
}

void teacher::setId(int id){ this->id = id; }

int teacher::getId(){ return this->id; }

void teacher::setName(QString name){ this->name = name; }

QString teacher::getName(){ return this->name; }

void teacher::setLvid(int lv_id){ this->lv_id = lv_id; }

int teacher::getLvid(){ return this->lv_id; }

void teacher::setPwd(QString pwd){ this->pwd = pwd; }

QString teacher::getPwd(){ return this->pwd; }

void teacher::setAge(int age){ this->age = age; }

int teacher::getAge(){ return this->age; }

void teacher::setSex(QString sex){ this->sex = sex; }

QString teacher::getSex(){ return this->sex; }

void teacher::setSubject(QString sub){ this->subjectname = sub; }

QString teacher::getSubject(){ return this->subjectname; }


