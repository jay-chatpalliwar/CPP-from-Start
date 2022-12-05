#include <iostream>
using namespace std;

int add(int a, int b)
{
    int c=a+b;
    return c;
}
   
   void greeting();

int main()
{
    int num1,num2;
    cout<<"Enter the numbers :"<<endl;
    cin>>num1>>num2;

    cout<<"The sum is :"<<add(num1 , num2)<<endl;//This will take the return value of 'add' function irrespective of num1 and num2.


    greeting();

    return 0;
}

void greeting()
{
    cout<<"Hello!!Good Morning."<<endl;
}