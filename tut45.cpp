/*****************Example of Virtual Base Class***********************/

#include <iostream>
#include <string>

using namespace std;

class Student
{
protected:
    string sid;
    int roll;

public:
    void input1()
    {
        cout << "Enter your school ID:" << endl;
        cin >> sid;
        cout << "Enter your school Roll no. :" << endl;
        cin >> roll;
    }
    void output1()
    {
        cout << "Entered student ID is :" << sid << endl;
        cout << "Entered student Roll no. is :" << roll << endl;
    }
};
class Test : virtual public Student
{
protected:
    float m1, m2, m3;

public:
    void input2(float p, float q, float r)
    {
        m1 = p;
        m2 = q;
        m3 = r;
    }
    void output2()
    {
        cout << " Your Maths marks(out of 100) are : " << m1 << endl;
        cout << " Your Physics marks(out of 100) are : " << m2 << endl;
        cout << " Your Chemistry marks(out of 100) are : " << m3 << endl;
    }
};

class Extra : virtual public Student
{
protected:
    float score;

public:
    void input3(float z)
    {
        score = z;
    }
    void output3()
    {
        cout << "You scored " << score << " out 50 in extra cirriculum activities." << endl;
    }
};

class Result : public Test, public Extra
{
    float total;
    float percent;

public:
    void set()
    {
        total = m1 + m2 + m3 + score;
        percent = (total * 100) / 350;
    }
    void display()
    {
        output1();
        output2();
        output3();
        set();
        cout << "You obtained " << total << " marks out of 350." << endl;
        cout << "Your percentage for this year is : " << percent << "\a" << endl;
    }
};

int main()
{
    Result Jay;
    Jay.input1();
    Jay.input2(98, 98, 99);
    Jay.input3(48);
    Jay.display();

    return 0;
}