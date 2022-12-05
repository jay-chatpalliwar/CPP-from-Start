#include <iostream>
using namespace std;

class A
{
    int a;

public:
    A &input(int a)
    {
        this->a = a;
        return *this;
    }
    void output()
    {
        cout << "Value of a is :" << a << endl;
    }
};

int main()
{
    A dj;
    // *************Advantage of using this pointer***************

    dj.input(100).output();
    A sj;
    sj.input(40).output();
    return 0;
}