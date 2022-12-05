// *******************Example of Default constructor*****************
#include <iostream>
using namespace std;

class Add
{
public:
    int a;
    int b;

    Add(void)
    {
        a = 100;
        b = 200;
        cout << "The sum of " << a << " and " << b << " is ::" << a + b << endl;
    }
};

int main()
{
    Add tone;
    Add ttwo;
    Add tthree;

    return 0;
}