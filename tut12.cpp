#include <iostream>
using namespace std;

int main()
{
    int a=10;
    int* b=&a;

    cout<<b<<endl;
    cout<<&a<<endl;
    cout<<*b<<endl;
    cout<<"*****************************"<<endl;

    int** c=&b;
    cout<<c<<endl;
    cout<<*c<<endl;
    cout<<**c<<endl;

    // ***************This are examples of pointers and pointer to pointers *********************



    return 0;
}