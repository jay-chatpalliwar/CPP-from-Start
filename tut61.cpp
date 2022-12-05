// ***********Yet another example of reading and writing of files in the same program***
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream jout("tut60o.txt");
    string out;

    cout << "Enter your string:" << endl;
    cin >> out;

    jout << out;
    jout.close();

    ifstream jin("tut60o.txt");
    getline(jin, out);
    cout << out;
    jin.close();

    return 0;
}