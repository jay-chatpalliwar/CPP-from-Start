// **************Example of Reading and Writing the files*****************
#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // *********Example of writing the file using ofstream derived class from fstreamBase****
    string s1;
    string s2;

    cout << "Enter the string:" << endl;
    getline(cin,s1);

    ofstream out("tut60o.txt");
    out << s1;

    // ****************Example of reading the file using ifstream derived class from fstream base class******

    ifstream in("tut60i.txt");
    getline(in, s2);
    cout << s2;

    return 0;
}