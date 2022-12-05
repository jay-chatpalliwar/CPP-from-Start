// *****************Example of Pointers in Classes********************
#include <iostream>
using namespace std;

class Data
{
    int data1;
    int data2;
    public:
    void input(int x, int y)
    {
        data1=x;
        data2=y;
    }
    void output()
    {
        cout<<"The value of data1 is :"<<data1<<endl;
        cout<<"The value of data2 is :"<<data2<<endl;
    }
};

int main()
{
    Data d1;
    Data *ptr= & d1;
    // *************Arrow Operator*********************
    ptr->input(45,90);
    ptr->output();
    return 0;
}