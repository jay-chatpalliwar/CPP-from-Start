#include <iostream>
using namespace std;

class deposit
{
    int pvalue;
    int year;
    float rate;
    float amount;

public:
    deposit(){};
    deposit(int p, int y, float r)
    {
        pvalue = p;
        year = y;
        rate = r;
        amount = pvalue;
        for (int i = 0; i < y; i++)
        {
            amount = amount * (1 + rate);
        }
    }
    deposit(int p, int y, int r)
    {
        pvalue = p;
        year = y;
        rate = float(r) / 100;
        amount = pvalue;
        for (int i = 0; i < y; i++)
        {
            amount = amount * (1 + rate);
        }
    }

    void display()
    {
        cout << "Principal value was :" << pvalue << " .The amount after " << year << " years will be :" << amount << endl;

        cout << "The increment in the investment is :" << amount - pvalue << endl;
    }
};

void star()
{
    cout << "***********************************************************************" << endl;
}
int main()
{

    int p;
    int y;
    float r;
    int R;

    cout << "Enter the principal value, period of time and rate(r) :" << endl;
    cin >> p >> y >> r;
    deposit A(p, y, r);
    A.display();
    star();

    cout << "Enter the principal value, period of time and rate(R) :" << endl;
    cin >> p >> y >> R;
    deposit B(p, y, R);
    B.display();
    star();

    return 0;
}