// **************Exercise on Inheritance::Use of multiple inheritance ****************************

#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
protected:
    int a;
    int b;
    float ratio;

public:
    int dj;
    void display1();

    void input1()
    {
        cout<<"Enter the values of a and b respectively:"<<endl;
        cin>>a>>b;

        ratio = (float)a / b;
        display1();
    }
};
void SimpleCalculator::display1()
{
    cout << "The sum of two numbers is :" << a + b << endl;
    cout << "The difference of two numbers is :" << a - b << endl;
    cout << "The product of two numbers is :" << a * b << endl;
    cout << "The ratio of two numbers is :" << ratio << endl;
}

class ScientificCalculator
{
protected:
    int c;
    int d;
    float sc;
    float sd;
    float degc;
    float degd;

public:
    void display2();
    void input2()
    {
        cout<<"Enter another two numbers c and d respectively:"<<endl;
        cin>>c>>d;

        sc = sqrt(c);
        sd = sqrt(d);
        degc = (3.14 * c) / 180;
        degd = (3.14 * d) / 180;
        display2();
    }
};
void ScientificCalculator::display2()
{
    cout << "The square of both the numbers are :" << (c * c) << " and " << (d * d) << " respectively." << endl;
    cout << "The square root of both the numbers are :" << sc << " and " << sd << " respectively." << endl;
    cout << "The common log of both the numbers are :" << log10f(c) << " and " << log10f(d) << " respectively." << endl;
    cout << "The sine of both the numbers are :" << sinf(degc) << " and " << sinf(degd) << " respectively." << endl;
    cout << "The cosine of both the numbers are :" << cosf(degc) << " and " << cosf(degd) << " respectively." << endl;
}

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};

int main()
{
    HybridCalculator Z;
    Z.input1();
    cout << "***************************************************************************************" << endl;
    Z.input2();
    cout << "***************************************************************************************" << endl;
    cout << "End of the program::" << endl;
    Z.dj = 1000;
    cout << Z.dj << endl;
    cout << "***************************************************************************************" << endl;
    return 0;
}