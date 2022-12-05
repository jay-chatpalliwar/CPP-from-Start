#include <iostream>
using namespace std;
template <class A>

class Jay
{
    A x;
    A y;
    A z;

public:
    Jay(A a, A b)
    {
        x = a;
        y = b;
        z = x + y;
    }
    void output()
    {
        cout << " The sum of " << x << " and " << y << " is :" << z;
    }
};

void func(int a)
{
    cout << "Data stored in func() is :" << a << endl;
}
template <class B>

void func(B a)
{
    cout << "Data stored in templatised func() is :" << a << endl;
}

int main()
{
    Jay<float> j(100.81, 45.82);
    j.output();
    cout << endl;
    func(100);
    func('J');
    func(100.234567);
    func("JAY IS MY NAME.");
    func("I live in Nagpur.");
    func(123456);


    return 0;
}