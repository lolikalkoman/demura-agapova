#pragma once 
#include "Teleprogram.h" 
class Movie :
    public teleProgram
{
protected:
    string directBox;
    int year;
public:
    Movie(string directBox, int year, string name, Time_ time);
    ~Movie();

    void setdirectBox(string directBox);
    void setYear(int year);

    string getdirectBox() const&;
    int getYear() const&;
    string type() { return "Movie"; }

    virtual string toString() const& override;
};