#pragma once 
#include <iostream> 
#include <string> 
#include "Time_.h" 
using namespace std;

class teleProgram
{
protected:
	string name;
	Time_ time;
public:
	teleProgram(string name, Time_ time);
	~teleProgram();

	void setName(string name);
	void setTime(Time_ time);

	string getName();
	Time_ getTime();


	virtual string toString() const& = 0;
};