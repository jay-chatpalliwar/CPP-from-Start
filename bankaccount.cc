#include <iostream>
using namespace std;

class bank
{
    string name;
    long int ac;
    string type;
    int balance;
    int x;
    int y;

public:
    void set()
    {
        cout << "Enter your bank a/c number :" << endl;
        cin >> ac;
        cout << "Enter your bank a/c name :" << endl;
        cin >> name;
        cout << "Enter your bank a/c type :" << endl;
        cin >> type;
        cout << "Enter your bank balance :" << endl;
        cin >> balance;
    }

    void deposit()
    {
        cout << "Enter the deposit amount :" << endl;
        cin >> x;
        balance += x;
    }

    void withdraw()
    {
        cout << "Enter the withdraw amount :" << endl;
        cin >> y;
        balance = balance - y;
    }

    void output1()
    {
        cout << "Name of holder :" << name << endl;
        cout << "Bank account number is :" << ac << endl;
        cout << "Type of bank is :" << type << endl;
        cout << "bank account balance before withdraw is  :" << balance << "/-."
             << endl;
    }

    void output2()
    {
        cout << "Bank account balance before withdraw and after deposit is " << balance << "/-." << endl;
    }

    void output3()
    {
        cout << "bank account balance before withdraw is  :" << balance << "/-."
             << endl;
    }
};

int main()
{
    bank a1;
    a1.set();
    a1.output1();
    a1.deposit();
    a1.output2();
    a1.withdraw();
    a1.output3();

    return 0;
}
