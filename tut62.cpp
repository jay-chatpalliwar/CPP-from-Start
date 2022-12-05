// *************Example of open() and eof() functions ************************

#include <iostream>
#include<fstream>
#include <string>

using namespace std;

int main()
{
    ofstream out;
    out.open("tut60i.txt");
    out<<" This is tutorial 62.\n";
    out<<"Of C++ course.\n";
    out<<"By Code with Harry.\n";
    out<<"Follower is Jay.\n";
    out<<"Which is very useful in software engineering.";

    out.close();

    string s;

    ifstream in;
    in.open("tut60i.txt");

    while (in.eof()==0)
    {
        getline(in,s);
        cout<<s<<" ";

    }
    
    return 0;
}