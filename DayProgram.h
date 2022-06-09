#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "Time_.h"
#include "Teleprogram.h"
#include "Children.h"
#include "Education.h"
#include "Movie.h"
#include "Show.h"
#include <fstream>
using namespace std;

bool mycompare(const teleProgram* lhs, const teleProgram* rhs);

class DayProgram
{
	vector<teleProgram*> programs;
	string date;
public:
	DayProgram();
	~DayProgram();
	void setDate(string date);
	string getDate() const&;
	void show();
	void add();
};