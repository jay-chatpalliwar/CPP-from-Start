// Use of constructors (both default and parameterized)******************
// *********************Quiz 2 ***********************************
#include <iostream>
#include <cmath>

using namespace std;

class doori
{
    int x1;
    int y1;
    int x2;
    int y2;
    friend int distance(doori , doori);

public:
    void input1()
    {
        cout << "Enter the first point :" << endl;
        cin >> x1 >> y1;
    }

    void output1()
    {
        cout << "The first point is :(" << x1 << "," << y1 << ")" << endl;
    }
    void input2()
    {
        cout << "Enter the second point :" << endl;
        cin >> x2 >> y2;
    }
    void output2()
    {
        cout << "The second point is :(" << x2 << "," << y2 << ")" << endl;
    }

    int distance(doori o1, doori o2)
    {
        int p = o1.x1 - o2.x2;
        int q = o1.y1 - o2.y2;

     long double r = sqrt((p * p) + (q * q));
        cout << "The distance between two points is " << r << endl;
        return r;
    }
};

int main()
{
    doori p,q,r;
    p.input1();
    p.output1();
    q.input2();
    q.output2();
    r.distance(p, q);

    return 0;
}