#include "DayProgram.h"
DayProgram::DayProgram()
{
}

DayProgram::~DayProgram()
{
}

void DayProgram::setDate(string date)
{
    this->date = date;
}

string DayProgram::getDate() const&
{
    return date;
}

void DayProgram::show()
{
    vector<teleProgram*>::iterator it;
    for (it = programs.begin(); it != programs.end(); it++)
    {
        cout << (*it)->toString();
        cout << endl;
    }
}

void DayProgram::add()
{
    int menu = -1;
    cout << "Education - 1; Movie - 2; Show - 3; Children - 4;" << endl;
    cin >> menu;
    switch (menu)
    {
    case 1:
    {
        string t1, t2;
        int h, m;
        cout << "Write science" << endl;
        cin >> ws;
        getline(cin, t1);
        cout << "Write name" << endl;
        cin >> ws;
        getline(cin, t2);
        cout << "Write hours" << endl;
        cin >> h;
        cout << "Write minutes" << endl;
        cin >> m;
        try
        {
            vector<teleProgram*>::iterator it;
            for (it = programs.begin(); it != programs.end(); it++)
            {
                if ((*it)->getTime() == Time_(h, m, 0))
                    throw;
            }
        }
        catch (string temp)
        {
            temp = "The show is already booked for this time";
            cout << temp << endl;
        }
        programs.push_back(new Education(t1, t2, Time_(h, m, 0)));
        break;
    }
    case 2:
    {
        string t1, t2;
        int h, m, y;
        cout << "Write direct box" << endl;
        cin >> ws;
        getline(cin, t1);
        cout << "Write name" << endl;
        cin >> ws;
        getline(cin, t2);
        cout << "Write hours" << endl;
        cin >> h;
        cout << "Write minutes" << endl;
        cin >> m;
        cout << "Write year" << endl;
        cin >> y;
        try
        {
            vector<teleProgram*>::iterator it;
            for (it = programs.begin(); it != programs.end(); it++)
            {
                if ((*it)->getTime() == Time_(h, m, 0))
                    throw;
            }
        }
        catch (string temp)
        {
            temp = "The show is already booked for this time";
            cout << temp << endl;
        }
        programs.push_back(new Movie(t1, y, t2, Time_(h, m, 0)));
        break;
    }
    case 3:
    {
        string t1, t2;
        int h, m;
        cout << "Write treme" << endl;
        cin >> ws;
        getline(cin, t1);
        cout << "Write name" << endl;
        cin >> ws;
        getline(cin, t2);
        cout << "Write hours" << endl;
        cin >> h;
        cout << "Write minutes" << endl;
        cin >> m;
        try
        {
            vector<teleProgram*>::iterator it;
            for (it = programs.begin(); it != programs.end(); it++)
            {
                if ((*it)->getTime() == Time_(h, m, 0))
                    throw;
            }
        }
        catch (string temp)
        {
            temp = "The show is already booked for this time";
            cout << temp << endl;
        }
        programs.push_back(new Show(t1, t2, Time_(h, m, 0)));
        break;
    }
    case 4:
    {
        string t2;
        int h, m, mina, maxa;
        cout << "Write minimal age" << endl;
        cin >> mina;
        cout << "Write max age" << endl;
        cin >> maxa;
        cout << "Write name" << endl;
        cin >> ws;
        getline(cin, t2);
        cout << "Write hours" << endl;
        cin >> h;
        cout << "Write minutes" << endl;
        cin >> m;
        try
        {
            vector<teleProgram*>::iterator it;
            for (it = programs.begin(); it != programs.end(); it++)
            {
                if ((*it)->getTime() == Time_(h, m, 0))
                    throw;
            }
        }
        catch (string temp)
        {
            temp = "The show is already booked for this time";
            cout << temp << endl;
        }
        programs.push_back(new Children(mina, maxa, t2, Time_(h, m, 0)));
        break;
    }
    }
}}