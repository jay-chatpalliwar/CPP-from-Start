// **************************Constructor Overloading ***********************************
#include <iostream>
using namespace std;

class number
{
    int a;
    int b;
    int c;

    public:
    number(int x, int y, int z)
    {
        a=x;
        b=y;
        c=z;
        cout<<"The product of three number is "<<(x*y*z)<<endl;
        cout<<"*************************************************"<<endl;

    }
    number(int p, int q)
    {

        a=p;
        b=q;

       cout<<"The product of two number is "<<(p*q)<<endl;
       cout<<"********************************************************************************"<<endl;
    }
    number(int k)
    {
        a=k;
        b=0;
        c=0;

        cout<<"This is a single number i.e,"<<k<<" and hence multiplication is not possible."<<endl;
        cout<<"********************************************************************************"<<endl;
    }
};

int main()
{
    number n1(2,3,4);
    number n2(8,9);
    number n3(10);
    return 0;
}
// ********************Default arguments in Constructors***********************

#include <iostream>
using namespace std;

class complex
{

    int x;
    int y;

public:
    complex(int a = 10, int b = 10)
    {
        x = a;
        y = b;

        if ((a==10) && (b==10))
        {
            cout<<"The default complex number is :"<<a<<"+"<<b<<"i."<<endl;
            
        }

      else if (b == 0)
        {
            cout << "The complex number is purely real :" << a << "+" << b << "i." << endl;
        }

        else if (a == 0)
        {
            cout << "The complex number is purely imaginary :" << a << "+" << b << "i." << endl;
        }
        else
        {
            cout << "The complex number is :" << a << "+" << b << "i." << endl;
        }
    }
};

int main()
{
    complex c1(4, 5);
    complex c2(10, 0);
    complex c3(0, 100);
    complex c4(10);

    return 0;
}