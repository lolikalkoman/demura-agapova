#include "Show.h" 

Show::Show(string treme, string name, Time_ time) : teleProgram(name, time)
{
    this->treme = treme;
}

Show::~Show()
{
}

void Show::setTreme(string treme)
{
    this->treme = treme;
}

string Show::getTreme() const&
{
    return treme;
}

string Show::toString() const&
{
    string temp;
    temp += this->name;
    temp += " ";
    temp += this->treme;
    temp += " ";
    temp += this->time.showTime();
    return string();
}