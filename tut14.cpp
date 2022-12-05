#include <iostream>
using namespace std;


struct people
{
    int a;
    char b;
    float c;
}; 

union person
{
   int x;
   char y;
   float z;

};

int main()
{
    people jay;
    jay.a=18;
    jay.b='j';
    jay.c=40.1879;

    cout<<jay.a<<endl;
    cout<<jay.b<<endl;
    cout<<jay.c<<endl;
    cout<<"****************************"<<endl;

    struct people veer;
    veer.a=36;
    veer.b='v';
    veer.c=21.2345678;

    cout<<veer.a<<endl;
    cout<<veer.b<<endl;
    cout<<veer.c<<endl;
      cout<<"****************************"<<endl;
//  ***********************End of structure (user defined datatype)******************

union person atul;
atul.x=50;
atul.y='t';
atul.z=20.2020;

cout<<atul.z<<endl;
  cout<<"****************************"<<endl;
// **************End of union*************************

enum car{lamborghini,buggati,ferrari,Mclaren};
    
    car c1=lamborghini;
    car c2=buggati;
    car c3=ferrari;
    car c4=Mclaren;

    cout<<c1<<endl;
    cout<<c2<<endl;
    cout<<c3<<endl;
    cout<<c4<<endl;
    return 0;
    // **********************End of enum*********************
}