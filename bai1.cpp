#include <iostream>
using namespace std;
int main()
{
    int tocDo,
        gio,
        distance = 0;

    cout << "What is the speed of the vehicle in mph? ";
    while(!(cin >> tocDo) || (tocDo < 1))
    {
        cout << "ERROR: number of speed must be \n"
             << "greater that 1 \n"
             << endl;
        cin.clear();
        cin.ignore(1200, '\n');
    }

    cout << "How many hours has it traveled? ";
    while(!(cin >> gio) || (gio < 1))
    {
        cout << "ERROR: number of hours traveled must be \n"
             << "greater that 1 \n"
             << endl;
        cin.clear();
        cin.ignore(1200, '\n');
    }

    cout << "Hour   Distance Traveled" << endl;
    cout << "------------------------" << endl;

    for(int i = 0; i < gio; i++)
    {
        distance += tocDo;
        cout << "   " << (i + 1) << "   " 
                << distance 
                << endl;
    }

    return 0;
}
