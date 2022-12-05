// ***********Example of abstract base class and pure virtual function ************
#include <iostream>
using namespace std;

class Base
{
protected:
    string city;

public:
    Base(string x)
    {
        city = x;
    }
    virtual void display() = 0;
};

class Derived : public Base
{

    string name;
    int age;

public:
    Derived(string x, string y, int z) : Base(x)
    {
        name = y;
        age = z;
    }

    void display()
    {
        cout << "Your name is :" << name << endl;
        cout << "Your age is :" << age << endl;
        cout << "You live in " << city << " city." << endl;
    }
};

int main()
{
    string ci;
    string na="Jay Sandeep Chatpalliwar";
    int ag;

    cout << "Enter your name:" << endl;
    cin >> na;
    cout << "Enter your age:" << endl;
    cin >> ag;
    cout << "Enter your city:" << endl;
    cin >> ci;

    Base *ptr;
    Derived jay(ci, na, ag);

    ptr = &jay;
    ptr->display(); /*Alternative--->(*ptr).display();*/

    return 0;
}