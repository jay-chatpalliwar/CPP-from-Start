#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int b=a;
    
    int last_digit;
    int sum=0;
    while(a>=1)
    {
        last_digit=a%10;
        sum+=pow(last_digit,3);
        a = a/10;
    }

    if(sum==b)
    {
        cout<<true<<endl;
    }
    else{cout<<false<<endl;}

    return 0;
}