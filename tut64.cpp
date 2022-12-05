// ****************My first ever Template in C++***************************
#include <iostream>
using namespace std;

template <class Z>

class A
{
public:
    Z num1;
    Z num2;
    Z sum;
    A(){}; //--->Default Constructor..
    A(Z x, Z y)
    {
        num1 = x;
        num2 = y;
    }
    void add(A o1, A o2)
    {
        sum = o1.num1 * o2.num1 + o1.num2 * o2.num2;
    }
    void display()
    {
        cout << "The dot-product of the two vectors is :" << sum << endl;
    }
};

int main()
{
    A<int> a(10, 200);
    A<int> b(23, 48);

    A<int> c;
    //---->In order not to take any constructor arguments(i.e,values of num1 and num2)default constructor is used
    c.add(a, b);
    c.display();

    A<float> p(12.83, 48.359);
    A<float> q(10.50, 32.640);

    A<float> r;
    r.add(p, q);
    r.display();

    return 0;
}