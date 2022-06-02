#include "Children.h" 

Children::Children(int minAge, int maxAge, string name, Time_ time)
    : teleProgram(name, time)
{
    this->minAge = minAge;
    this->maxAge = maxAge;
}

Children::~Children()
{
}

void Children::setMinAge(int minAge)
{
    this->minAge = minAge;
}

void Children::setMaxAge(int maxAge)
{
    this->maxAge = maxAge;
}

int Children::getMinAge() const&
{
    return 0;
}

int Children::getMaxAge() const&
{
    return 0;
}

string Children::toString() const&
{
    string temp;
    temp += this->name;
    temp += " ";
    temp += to_string(this->minAge);
    temp += " ";
    temp += to_string(this->maxAge);
    temp += " ";
    temp += this->time.showTime();
    return string();
}