// ************************Arrays in objects ************************
#include <iostream>
using namespace std;

class result
{
    int a;
    int b;
    public:
    void input()
    {
        cout<<"Enter your roll number:"<<endl;
        cin>>a;

        cout<<"Enter obtained marks :"<<endl;
        cin>>b;
    }

    void output();
};

void result ::output()
{
    cout<<"The PRN of the student is :215100"<<a<<" and marks obtained out of 500 is :"<<b<<endl;
}

int main()
{
    result students[10];
    for (int i = 0; i <10; i++)
    {
        students[i].input();
        // students[i].output();
    }
    for (int j = 0; j < 10; j++)
    {
        students[j].output();
    }
    
    
    return 0;
}