#include <iostream>
using namespace std;

class base
{
private:
    int a;
    int b;

protected:
    int c;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void output()
    {
        cout << "The value of a is :" << a << " and the value of b is :" << b << endl;
    }
};
class derived : public base
{

public:
    void set(int z = 100)
    {
        c = z;
    }

    void display()
    {

        cout << "The value of c is :" << c << endl;
    }
};

int main()
{
    base b;
    b.setdata(19, 55);
    b.output();

    derived d;
    d.set();
    d.display();

    // cout<<d.c;----> Will give error as (int) c is a protected member in base class

    derived e;
    e.setdata(99, 87);
    e.output();
    e.set(2345);
    e.display();

    return 0;
}