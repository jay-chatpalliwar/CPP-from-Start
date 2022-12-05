#include <iostream>

using namespace std;
class print
{
   int a;
   int b;

   public:
   print(void);
   void set(int p , int q)
   {
       a=p;
       b=q;

   }
   void output()
   {
       cout<<"The value of a is "<<a<<" and the value of b is "<<b<<"."<<endl;
   }
};

print::print(void)
{
    cout<<"*****************************"<<endl;
}

int main()
{
print a;
a.set(10,100);
a.output();

print b;
b.set(88,99);
b.output();

    return 0;


}