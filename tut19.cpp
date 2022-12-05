#include <iostream>
# include <iomanip>
using namespace std;

// *****************Some examples of function overloading ******************

int add (float a, float b)
{
    float c=a+b;
    return c;
    cout<<"Function 1 is used:"<<endl;
}

int add (int p,int q, int r)
{
    return p+q+r;
    cout<<" Function 2 is used:"<<endl;
}

int volume (int r ,int h)
{
 return (3.14*r*r*h);
 cout<<"Function 3 is used:"<<endl;
}

int volume (int l,int b,int h)
{
    return (l*b*h);
    cout<<"Function 4 is used:"<<endl;
}

int volume (int a)
{
    return (a*a*a);
    cout<<"Function 5 is used:"<<endl;
}
int main()
{
    cout<<"The sum of 12.56 and 34.89 is "<<add(12.56,34.89)<<setw(10)<<endl;
    cout<<"The sum of 5,6 and 18 is "<<add(5,6,18)<<endl;
    cout<<"The volume of cylinder with radius=6 and height=18 is "<<volume(6,18)<<endl;
    cout<<"The volume of cuboid with length=4 , breadth=19 and height=2 is "<<volume(4,19,2)<<endl;
    cout<<"The volume of cube of side=10 is "<<volume(10)<<endl;

    return 0;
}