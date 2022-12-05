#include <iostream>
using namespace std;

class student
{
public:
    long int roll;

    void setroll(long int);
    void displayroll();
};

void student ::setroll(long int a)
{
    roll = a;
}

void student ::displayroll()
{
    cout << "Your roll no. for JEE Examination is :" << roll << endl;
}

class marks : public student
{
public:
    int x, y, z;

    void setmarks(int, int, int);

    void displaymarks();
};

void marks::setmarks(int p, int q, int r)
{
    x = p;
    y = q;
    z = r;
}

void marks::displaymarks()
{
    cout << "Your Physics marks(out of 100) are :" << x << endl;
    cout << "Your Maths marks(out of 100) are :" << y << endl;
    cout << "Your Chemistry marks(out of 100) are :" << z << endl;
}

class result : public marks
{

public:
    float percentage;

    void setresult()
    {
        percentage = (x + y + z) / 3;
    }

    void displayresult()
    {
        setresult();
        displayroll();
        displaymarks();

        cout << "The result is :" << percentage << "%." << endl;
    }
};
int main()
{
    result jay;
    jay.setroll(11570018);
    jay.setmarks(98, 98, 99);
    jay.displayresult();
    return 0;
}
// ******************End of the program**************************
// *********************example of multilevel inheritance*******************
// ************student---->marks---->result*****************************