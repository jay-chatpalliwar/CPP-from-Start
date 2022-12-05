// ************************** Passing objects through function arguments*****************************
// ********************By using example of adding two complex numbers*****************************
#include <iostream>
using namespace std;

class sum
{
    int a;
    int b;
    public:
    void input(int p , int q){
        a=p;
        b=q;
    }

    void add(sum o1 , sum o2)
    {
        a=o1.a+o2.a;
        b=o1.b+o2.b;
    }
    void output()
    {
       cout<<"The complex number is "<<a<<"+"<<b<<"i***"<<endl;
    }

};

int
main()
{
   sum one ,two ,three;

   one.input(20,30);
   one.output();
   two.input(21,31);
   two.output();
   three.add(one , two);
   three.output();

    return 0;
}