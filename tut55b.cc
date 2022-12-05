#include <iostream>
using namespace std;

class Register
{
   int a, b , c, d, e;
   float f;
   public:
   void setId()
   {
       cout<<"Enter your PRN :"<<endl;
       cin>>a;
       cout<<"Enter your Roll no. :"<<endl;
       cin>>b;
   }
   void setMarks()
   {
       cout<<"Enter your Physics marks(out of 100):"<<endl;
       cin>>c;
       cout<<"Enter your Maths marks(out of 100):"<<endl;
       cin>>d;
       cout<<"Enter your Chemistry marks(out of 100):"<<endl;
       cin>>e;
   }
   void display()
   {
       f=(c+d+e)/3;
       cout<<"Your college ID is : WCE2021"<<a<<endl;
       cout<<"Your roll no.is :"<<b<<endl;
       cout<<"Your Physics are :"<<c<<endl;
       cout<<"Your Maths are :"<<d<<endl;
       cout<<"Your Chemistry are :"<<e<<endl;
       cout<<"Your average marks are :"<<f<<endl;
       cout<<"Your total percentage is :"<<f<<"%."<<endl;

   }
};

int main()
{
    Register * ptr=new Register[3];
    Register * ptrTemp;
    

    for (int i = 0; i < 3; i++)
    {
       ptr->setId();
       ptr->setMarks();
       ptr->display();

       ptr++;
    }
    return 0;
}