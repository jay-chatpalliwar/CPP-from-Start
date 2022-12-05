// ********Example of template with multiple parameters*************

#include <iostream>
using namespace std;

template <class P, class Q>

class myclass
{
     P data1;
     P data2;
     Q data3;
     Q data4;
     public:
     myclass(P a,P b,Q c,Q d)
     {
         data1=a;
         data2=b;
         data3=c;
         data4=d;
     }
     void output()
     {
         cout<<this->data1<<endl;
         cout<<this->data2<<endl;
         cout<<this->data3<<endl;
         cout<<this->data4<<endl;
     }
};

int main()
{
    myclass <float ,char> jay(12.3456,76.4390,'@','%');
    jay.output();

    return 0;
}