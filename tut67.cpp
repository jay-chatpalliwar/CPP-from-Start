#include <iostream>
using namespace std;

template <class T1, class T2, class T3>//---->Class template with multiple parameters****
float average(T1 x, T2 y, T3 z)
{
    float b = (x + y + z) / 3;
    return b;
}

template <class T> //-----> Template functions***********
void swapnum(T &p, T &q)
{
    T temp;
    temp = p;
    p = q;
    q = temp;
}

int main()
{
    average(12, 43.546, 82.393);
    cout << "The average of three numbers is :" << average(12, 43.546, 82.393) << endl;
    int x = 10;
    int y = 90;

    cout << "The values of x and y before swapping are :" << x << " and " << y << " respectively." << endl;

    swapnum(x, y);
    cout << "The values of x and y after swapping are :" << x << " and " << y << " respectively." << endl;

    return 0;
}