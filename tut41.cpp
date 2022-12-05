#include <iostream>
using namespace std;

class base1
{
protected:
    
int a;
public:
    void input1(int x)
    {
        a = x;
    }
};

class base2
{
protected:
    int b;

public:
    void input2(int y)
    {
        b = y;
    }
};

class derived : public base1, public base2
{
public:
    float c;
    void avg()
    {
        c = (float)(a + b) / 2;
    }
    void output()
    {
        avg();

        cout << "The values of integers of base 1 and base 2 are :" << a << " and " << b << " respectively." << endl;
        cout << "The sum of these values is :" << a + b << endl;
        cout << "The average of these values is :" << float(c) << endl;
    }
};

int main()
{
    derived n;
    n.input1(43);
    n.input2(52);
    n.output();

    return 0;
}