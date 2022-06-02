#pragma once 
#include "Teleprogram.h" 
class Children :
    public teleProgram
{
protected:
    int minAge;
    int maxAge;
public:
    Children(int minAge, int maxAge, string name, Time_ time);
    ~Children();
    void setMinAge(int minAge);
    void setMaxAge(int maxAge);

    int getMinAge() const&;
    int getMaxAge() const&;
    string type() { return "Children"; }

    virtual string toString() const& override;
};