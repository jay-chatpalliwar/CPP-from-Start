#include <iostream>
using namespace std;

class Result
{
   int roll;
   float percentage;
   public:
   void input(int a, float b)
   {
       roll=a;
       percentage=b;
   }
   void output()
   {
       cout<<"Entered roll no. of student is :"<<roll<<endl;
       cout<<"Percentage scored by student is :"<<percentage<<endl;
   }
};

int main()
{
   Result *ptr=new Result[5];

   int x,i;
   float y;
   for (
        i = 0; i < 5; i++)
   {
       cout<<"Enter student "<<i+1<<" roll no :"<<endl;
       cin>>x;
       cout<<"Enter student "<<i+1<<" percentage scored :"<<endl;
       cin>>y;
       ptr->input(x,y);
       ptr->output();
       
       ptr++;
   }

    return 0;
}