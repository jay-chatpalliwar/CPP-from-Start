// **************Example of Virtual Function*****************

#include <iostream>
using namespace std;

class Base
{
public:
    int base = 100;

    virtual void output()
    {
        cout << "1..Display of Base function and int base ." << base << endl;
        ;
    }
};

class derived : public Base
{

public:
    int derived = 200;

    virtual void output()
    {
        cout << "2..Display of Base function and int base." << base << endl;
        cout << "2..Display of Derived function and int derived." << derived << endl;
    }
};

class Derived : public derived
{
public:
    int Derived = 300;
    void output()
    {
        cout << "3..Display of Base function and int base." << base << endl;
        cout << "3..Display of Derived function and int derived." << derived << endl;
        cout << "3..Display of Derived2 function and int Derived." << Derived << endl;
    }
};

int main()
{
    Base obj1;
    Base *ptr;
    derived obj2;
    Derived obj3;
    ptr = &obj3;
    ptr->output();

    return 0;
}