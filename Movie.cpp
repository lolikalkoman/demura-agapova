#include "Movie.h" 

Movie::Movie(string directBox, int year, string name, Time_ time)
    :teleProgram(name, time)
{
    this->directBox = directBox;
    this->year = year;
}

Movie::~Movie()
{
}

void Movie::setdirectBox(string directBox)
{
    this->directBox = directBox;
}

void Movie::setYear(int year)
{
    this->year = year;
}

string Movie::getdirectBox() const&
{
    return directBox;
}

int Movie::getYear() const&
{
    return year;
}

string Movie::toString() const&
{
    string temp;
    temp += this->name;
    temp += " ";
    temp += to_string(this->year);
    temp += " ";
    temp += this->directBox;
    temp += " ";
    temp += this->time.showTime();
    return string();
}