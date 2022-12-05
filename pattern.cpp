#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    //Example of simple and hollow pattern using "*"~~~~~~~
    // int row;
    // int col;
    // cout<<"Enter the rows and column of the pattern."<<endl;
    // cin>>row>>col;

    // for (int i = 1; i <=row; i++)
    // {
    //    for (int j = 1; j<=col; j++)
    //    {
    //       if (i==1 ||i==row || j==1 || j==col)
    //       {
    //           cout<<" * ";
    //       }
    //       else
    //       {
    //           cout<<"   ";
    //       }
    //    }
    //    cout<<endl;
    // }

    //Example of pyramids pattern~~~~~~~~~~~~
    // int a;

    // cout<<"Enter the size of the pattern:"<<endl;
    // cin>>a;

    // for (int i = a; i>=1;i--)
    // {
    //     for (int j = 1; j<=i; j++)
    //     {
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }

     //Example of number pattern~~~~~~~~~~~~~~
    int a;

    cout<<"Enter the size of the number pattern :"<<endl;
    cin>>a;
    int count=1;

    for (int i = 1; i <=a; i++)
    {
        for (int j = 1; j <=i; j++)
        {
           cout<<" "<<count<<" ";
           count++;
        }
        cout<<endl;
    }
    return 0;
}