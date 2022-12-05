#include <iostream>
using namespace std;

void star()
{
    cout << "********************" << endl;
}
int main()
{
    string fname, mname, sname;

    cout << "Enter your first name :" << endl;
    cin >> fname;

    cout << "Your first name is :" << fname << endl;

    star();

    cout << "Enter your middle name :" << endl;
    cin >> mname;

    cout << "Your middle name is " << mname << endl;

    star();

    cout << "Enter your surname :" << endl;
    cin >> sname;

    cout << "Your surname is " << sname << endl;

    star();

    cout << "Your name is " << fname << " " << mname << " " << sname << "." << endl;

    star();

    return 110;
}