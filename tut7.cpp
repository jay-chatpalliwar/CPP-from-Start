# include<iostream>

using namespace std;
int a=100;

int main()
//     ********Scope resolution operator*************
//It is used to assign the value of global variable*******************
{
    int a=10;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of global a is "<<::a<<endl;
    cout<<"************************************************"<<endl;
    
    // *************float,double,long double**************
   
     float b=45.66;
     long double c=45.66;

     cout<<"The size of 45.66 is "<<sizeof(45.66)<<endl;
     cout<<"The size of 45.66f is "<<sizeof(45.66f)<<endl;
     cout<<"The size of 45.66F is "<<sizeof(45.66F)<<endl;
     cout<<"The size of 45.66l is "<<sizeof(45.66l)<<endl;
     cout<<"The size of 45.66L is "<<sizeof(45.66L)<<endl;
     cout<<"************************************************"<<endl;

    //  ************Reference Variables********************

    int x=455;
    int  y=x;
     

    cout<<"The value of x is "<<x<<endl;
    cout<<"the value of  y is "<< y<<endl;
    cout<<"************************************************"<<endl;

    // *************Typecasting**********************

    int p=50;
    float q=50.68;

    cout<<"The value of q is "<<q<<endl;
    cout<<"The value of (int)q is "<<(int)q<<endl;
    
    cout<<"The sum of p and q is "<<p+q<<endl;
    cout<<"The sum of p and (int)q is "<<p+(int)q<<endl;


    
    return 0;

}