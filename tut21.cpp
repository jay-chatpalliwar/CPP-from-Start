// ***********************Class in C++ with objects and specifiers(private,public,etc.)********************
#include <iostream>
using namespace std;

class employee
{
    private:
    int a,  b, c;
    public:
    int d,e;

    void setdata1(int a1,int b1,int c1) ;
    void setdata2(int p , int q);

    void getdata()
    {
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }

};

void employee::setdata1(int a1,int b1, int c1)
{
    a=a1;
    b=b1;
    c=c1;
} 
// *****************Using a function to acess a public variable will give a garbage value.....Therefore we need to define a public variable in an object only*********************
void employee::setdata2(int p , int q)
 {
    p=d;
    q=e;

 }

int main()
{
   employee jay;

   jay.setdata1(10,20,40);
   jay.d=40;
   jay.e=500;
    jay.setdata2(40,50);
  jay.getdata();

    return 0;
}
// ************************code given during explanation***************************
// ************************my code ***************************************************
 
//  #include <iostream>
//  #include<string>

//  using namespace std;

//  class animals
//  {
//      public:
//      string a;
//      string b;
//      int c;
//      char d;

//      void display()
//      {
//          cout<<"The name of animal is :"<<a<<endl;
//          cout<<"The sound of animal is :"<<b<<endl;
//          cout<<"The age of animal is :"<<c<<endl;
//          cout<<"The character of animal is :"<<d<<endl;
//      }

//  };
 
//  int main()
//  {
//      animals dog;

//      dog.a=Tommy;
//      dog.b=Bark;
//      dog.c=13;
//      dog.d='t';
//      dog.display();
     
//      return 0;
//  }
