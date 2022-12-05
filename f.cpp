#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int i=0;
    while(i<t)
    {
        int a,b;
        cin>>a>>b;
        int c=a+b;
        int count[10]={6,2,5,6,4,5,6,3,7,6};
        int num=0;
        while(c>0)
        {
            int lastdigit=c%10;
            num+=count[lastdigit];
            c=c/10;
        }
        cout<<num<<endl;
        i++;
    }
    return 0;
}