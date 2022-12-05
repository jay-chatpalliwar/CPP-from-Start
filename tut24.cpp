#include <iostream>
using namespace std;

class employee
{
    static int number;
    int id;
    int salary;

public:
    void input()
    {
        cout << "Enter your E ID:" << endl;
        cin >> id;
        cout << "Your salary is :" << endl;
        cin >> salary;
    }
    void output()
    {
        cout << "Your employee ID is :TCS215100" << id << endl;
    }

    void display()
    {
        cout << "Count number is :" << number << endl;
        number++;
    }
};

int employee::number=1;

int main()
{
    employee jay;
    jay.input();
    jay.output();
    jay.display();
    employee ajay;
    ajay.input();
    ajay.output();
    ajay.display();

    return 0;
}