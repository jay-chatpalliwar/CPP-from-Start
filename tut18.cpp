#include <iostream>
using namespace std;

// ******************Factorial of a number ****************************

// int factorial(int n)
// {
//     if ((n==1) ||(n==0))
//     {
//         return 1;
//     }
//    else if (n<0)
//    {
//        return 0;
//    }
   
    
//     return n*factorial(n-1);
// }

// int main()
// {
//     int a;

//     cout<<"Enter the number :"<<endl;
//     cin>>a;

//     cout<<"The factorial of "<<a<<" is :"<<factorial(a)<<endl;

//     return 0;
// }

int fib(int a)
{
    if (a<2)
    {
        return 1;
    }
    return fib(a-1)+fib(a-2);
}

int main()
{  
    int x;
    cout<<"Enter the number :"<<endl;
    cin>>x;

    cout<<"The "<<x<<" term in the fibonaci series is "<<fib(x)<<endl;

    return 0;
}