#include <iostream>
using namespace std;

template <class p = int, class q = char, class r = float> 
//-----> Example of default parameters in class template*********

class datatypes
{
    p data1;
    q data2;
    r data3;

public:
    datatypes(p x, q y, r z)
    {
        data1 = x;
        data2 = y;
        data3 = z;
    }

    void output()
    {
        cout << "The data stored in data1 file is :" << this->data1 << endl;
        cout << "The data stored in data2 file is :" << this->data2 << endl;
        cout << "The data stored in data3 file is :" << this->data3 << endl;
    }
};

int main()
{
    datatypes<> d(5242, '~', 12.5532);
    d.output();

    cout << endl;

    datatypes<char, float, int> e('J', 2323.5433, 21510018);
    e.output();

    cout << endl;

    char j = 'J';
    cout << "The ASCII Value of "<<j<<" is :"<<int(j)<<endl;;

    return 0;
}