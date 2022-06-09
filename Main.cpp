#include <iostream>
#include "DayProgram.h"
#include <ostream>
using namespace std;


int main()
{
    DayProgram pr;
    int menu = -1;
    while (menu != 0)
    {
        cout << "Add - 1; Sort - 2; Find by - 3; Save - 4; Load - 5; Show - 6;" << endl;
        cin >> menu;
        switch (menu)
        {
        case 1:
        {
            pr.add();
            break;
        }



        case 2:
        {
            ofstream out;
            string path;
            cout << "Write path" << endl;
            cin >> ws;
            getline(cin, path);
            out.open(path);
            pr.save(out);
            break;
        }

        case 3:
        {
            ifstream in;
            string path;
            cout << "Write path" << endl;
            cin >> ws;
            getline(cin, path);
            in.open(path);
            pr.load(in);
            break;
        }

        case 4:
        {
            pr.show();
            break;
        }
        }
    }

    return 0;
}