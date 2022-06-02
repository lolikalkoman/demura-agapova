#include "Teloprogram.h" 

teleProgram ===::tvProgram(string name, Time_ time)
{
	this->name = name;
	this->time = time;
}

teleProgram::~teleProgram()
{
}

void teleProgram::setName(string name)
{
	this->name = name;
}

void teleProgram::setTime(Time_ time)
{
	this->time = time;
}

string teleProgram::getName()
{
	return name;
}

Time_ teleProgram::getTime()
{
	return time;
}