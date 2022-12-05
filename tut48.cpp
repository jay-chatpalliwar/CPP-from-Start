#include <iostream>
using namespace std;

class Base1
{
    int data1;

    public:
    Base1 (int a)
    {
        data1=a;
        cout<<"Constructor of Base 1 called."<<endl;
        cout<<"The value of data 1 is :"<<data1<<endl;;
    }
};

class Base2
{
     int data2;

    public:
    Base2 (int a)
    {
        data2=a;
        cout<<"Constructor of Base 2 called."<<endl;
        cout<<"The value of data 2 is :"<<data2<<endl;
    }
};

class Derived : public Base1,virtual public Base2
{
     int data3,data4;

    public:
    Derived (int a, int b, int c, int d) : Base1(a),Base2(b)
    {
        data3=c;
        data4=d;
        cout<<"Constructor of Derived called."<<endl;
        cout<<"The value of data 3 is :"<<data3<<endl;
        cout<<"The value of data 4 is :"<<data4<<endl;
    }
};

int main()
{
    Derived jay(100,345,75,3489);

    return 0;
}