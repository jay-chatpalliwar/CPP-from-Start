#include <iostream>
using namespace std;

class Base
{
    int data1;
    int data2;

public:
    void setdata(int a, int b);
    int getdata1();
    int getdata2();
    void output(); // ----> Personally made for Base class only...Just to verify that data1 and data2 can set value from an object in Base class.
};

void Base ::setdata(int a, int b)
{
    data1 = a;
    data2 = b;
}

int Base ::getdata1()
{
    return data1;
}

int Base ::getdata2()
{
    return data2;
}

void Base ::output()
{
    cout << "Value of data 1 is :" << data1 << endl;
    cout << "Value of data 2 is :" << data2 << endl;
}

class Derived : Base  //------>Inheritance of Base class in the Derived class..
{

    int data3;

public:
    void multiply()
    {
        setdata(19, 5);
        data3 = getdata1() * getdata2();
    }
    void display()
    {
        cout << "The value of data 1 is :" << getdata1() << endl;
        cout << "The value of data 2 is :" << getdata2() << endl;
        cout << "The value of data 3 is :" << data3 << endl;
    }
};

void star()
{
    cout << "************************************************************" << endl;
}

int main()
{
    Base d;
    d.setdata(30, 20);
    d.output();
    star();
    Derived data;
    // data.setdata(23, 10);---->when the visibility mode is private,
    // this member func of Base class needs to be called under the member func of Derived class..
    data.multiply();
    data.display();
    star();
    return 0;
}