#pragma once 
#include "Teleprogram.h" 
class Education :
    public teleProgram
{
protected:
    string science;
public:
    Education(string science, string name, Time_ time);
    ~Education();

    void setScience(string science);

    string getScience() const&;

    virtual string toString() const& override;
};