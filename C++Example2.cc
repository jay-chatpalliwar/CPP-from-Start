#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class Student
{

public:
    int roll;
    string name;
    Student()
    {
        cout << "Enter student name :" << endl;
        cin >> name;
        cout << "Enter student roll no. :" << endl;
        cin >> roll;
    }

    void display()
    {
        cout << "Entered student name is :" << name << endl;
        cout << "Entered student roll no. is :" << roll << endl;
    }
};

void output(map<string, int> &s)
{
    map<string, int>::iterator it = s.begin();

    cout << "Displaying student's data :" << endl;

    for (it; it != s.end(); it++)
    {
        cout << "Name :" << (*it).first << " and roll no. :" << (*it).second << endl;
    }
}
map<string, int> student;

void cred1()
{
    string a;
    cout << "Enter the name of student to find if it exists or not:" << endl;
    cin >> a;

    if (student.find(a) != student.end())
    {
        cout << "DATA found!!!" << endl;
        cout << "Entered student roll no. is :" << student[a] << endl;
    }
    else
    {
        cout << "NO DATA found!" << endl;
    }
}
int main()
{

    int size;
    cout << "Enter the no. of intakes :" << endl;
    cin >> size;

    Student o[size];

    map<string, int> student;
    map<string, int>::iterator itr = student.begin();

    for (int i = 0; i < size; i++)
    {
        student.insert({o[i].name, o[i].roll});
    }

    output(student);

    cout << endl;

    int cre;
    cout << "Enter which credential you will use to obtain data:" << endl
         << "Enter 1 for 'NAME' credential:" << endl
         << "Enter 2 for 'ROLL NO.' credential:" << endl;
    cin >> cre;

    if (cre == 1)
    {
        string a;
        cout << "Enter the name of student to find if it exists or not:" << endl;
        cin >> a;

        if (student.find(a) != student.end())
        {
            cout << "DATA found!!!" << endl;
            cout << "Entered student roll no. is :" << student[a] << endl;
        }
        else
        {
            cout << "NO DATA found!" << endl;
        }
    }

    else if (cre == 2)
    {
        cout << "You cannot find student data from roll no." << endl;
        cout << "Please enter your name to find student data." << endl;

        cred1();
    }
    else
    {
        cout << "Enter valid credential code." << endl;
    }

    return 0;
}
