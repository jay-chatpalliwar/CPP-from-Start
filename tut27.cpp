// ************Two examples in one code*********************
// *************Examples of friend classes and functions*****************
#include <iostream>
using namespace std;

class Y;
class X
{
    int a;
    friend int display(X , Y);
    friend int swap (X &, Y &);
    public:
    void input()
    {
        cout<<"Enter the first number :"<<endl;
        cin>>a;
    }
};

class Y
{
    int b;
     friend int display(X , Y);
     friend int swap (X &, Y &);
    public:
    void input ()
    {
      cout<<"Enter the second number :"<<endl;
      cin>>b;
    }
};
int display(X o1, Y o2)
{
    int gf=o1.a+o2.b;
    return gf;
}
void star()
{
    cout<<"****************************************"<<endl;
}
int swap (X & o1,Y & o2)
{
    int temp=o1.a;
    o1.a=o2.b;
    o2.b=temp;
    cout<<"The value of "<<o2.b<<" after swapping is :"<<o1.a<<endl;
    cout<<"The value of "<<o1.a<<" after swapping is :"<<o2.b<<endl;
    return 0;

}
int main()
{
    X a1;
    a1.input();
    Y a2;
    a2.input();

    display(a1 ,a2);
    cout<<"The sum of numbers is "<<display(a1,a2)<<endl;
    star();
    swap(a1,a2);
   
   
    return 0;
}