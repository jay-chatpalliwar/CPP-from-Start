/**********Example of Pointers to derived class and late binding**/
#include <iostream>
using namespace std;

class Base
{
    public:
    int base;
    void display()
    {
        cout<<"Display of Base class and int base :"<<base<<endl;

    }
};

class Derived : public Base
{
    public:
    int derived;
    void display()
    {
        cout<<"Display of Base class and int base :"<<base<<endl;
        cout<<"Display of Derived class and int base :"<<derived<<endl;
    }
};

int main()
{
    Base * Bptr;
    Base objB;
    Derived objD;
    Bptr=& objD;
    Bptr->base=123;
    // Bptr->derived=100;
    //Will give error as the pointer is of Base class and will only run the Base class member functions.
    Bptr->display();
    Derived * Dptr;
    Dptr= & objD;
    Dptr->base=987;
    Dptr->derived=1000;
    (*Dptr).display();


    return 0;
}