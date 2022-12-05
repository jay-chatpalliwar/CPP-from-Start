#include <iostream>
using namespace std;

void star(int *a)
{
    if(*a<=5000)
    {int x=*a;
    *a=x*x*x;
    cout<<*a<<endl;}
    else
    cout<<"-1"<<endl;
    
}

int main()
{
    int n;
    cin>>n;
    star(&n);
    return 0;
}