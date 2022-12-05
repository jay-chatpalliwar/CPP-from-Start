// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions

#include <iostream>
#include <string>
using namespace std;

class Binary
{
    string s;

public:
    void read();
    void check();
    void display();
    void compliment();
};

void Binary::read()
{
    cout << "Enter the binary number :" << endl;
    cin >> s;
}

void Binary::check()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void Binary::display()
{
    cout << "The input binary number is :"<< endl;
     for (int i = 0; i <= s.length(); i++)
     {
         cout<<s.at(i);
     }
     cout<<endl;
}

void Binary::compliment()
{
     for (int i = 0; i <= s.length(); i++)
     {
    if (s.at(i)=='0')
    {
        s.at(i)='1';
    }
    else 
    {
        s.at(i)='0';
    }
     }
}
int main()
{
    Binary z;
    z.read();
    z.check();
    
    z.compliment();
    z.display();
    return 0;
}