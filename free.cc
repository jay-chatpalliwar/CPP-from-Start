#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    int i=0;
    while(i<t)
    {
        int x;
        cin>>x;

        if(x>=1&&x<=4)
        cout<<"Yes"<<endl;

        else
        cout<<"No"<<endl;
        i++;
    }
    return 0;
}