// *************Example of virtual functions******************
#include <iostream>
using namespace std;

class CWH
{
protected:
    string title;
    float ratings;

public:
    CWH(string s, float r)
    {
        title = s;
        ratings = r;
    }
    virtual void output(){};
};

class CWHT : public CWH
{
    int words;

public:
    CWHT(string s, float r, int w) : CWH(s, r)
    {
        words = w;
    }
    void output()
    {
        cout << "Title of the text tutorial is :" << title << endl;
        cout << "Ratings of this content is (out of 5) :" << ratings << endl;
        cout << "No. of words in this tutorial is :" << words << endl;
    }
};

class CWHV : public CWH
{
    float video;

public:
    CWHV(string s, float r, float v) : CWH(s, r)
    {
        video = v;
    }

    void output()
    {
        cout << "Title of the text tutorial is :" << title << endl;
        cout << "Ratings of this content is (out of 5) :" << ratings << endl;
        cout << "Length of this tutorial is :" << video << endl;
    }
};

int main()
{
    string z = "Cplusplus tutorial";
    string z_ = "Cplusplus text tutorial";

    float y = 4.90;
    float y_ = 4.00;

    int p = 1230;
    float x = 50.40;

    CWHT obj1(z, y, p);
    CWHV obj2(z_, y_, x);

    CWH *ptr[2];

    ptr[0] = &obj1;
    ptr[1] = &obj2;

    ptr[0]->output();
    cout << "************************************************" << endl;
    ptr[1]->output();

    return 0;
}
// RULES::::
// They cannot be static
// They are accessed by object pointers
// Virtual functions can be a friend of another class
// A virtual function in the base class might not be used.
// If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class