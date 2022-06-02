#pragma once 
#include "Teleprogram.h" 
class Show :
    public teleProgram
{
protected:
    string treme;
public:
    Show(string treme, string name, Time_ time);
    ~Show();

    void setTreme(string treme);

    string getTreme() const&;

    virtual string toString() const& override;
};