#include "Education.h" 

Education::Education(string science, string name, Time_ time) : Teleprogram(name, time)
{
    this->science = science;
}

Education::~Education()
{
}

void Education::setScience(string science)
{
    this->science = science;
}

string Education::getScience() const&
{
    return science;
}

string Education::toString() const&
{
    string temp;
    temp += this->name;
    temp += " ";
    temp += this->science;
    temp += " ";
    temp += this->time.showTime();
    return string();
}