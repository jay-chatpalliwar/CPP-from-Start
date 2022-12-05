// ****************Syntax of Inheritance*******************************8
#include <iostream>
using namespace std;

class employee
{
public:
    int id;

    float salary;

    employee() {}

    employee(int x, float y = 1000.85)
    {
        id = x;
        salary = y;

        cout << "Employee id is :" << x << " and salary is :" << y << " $." << endl;
    }
};

class programmer : public employee
{
public:
    int language = 10;

    programmer(int z, /*int a,*/ float b = 2000.75)
    {
        id = z;
        // language = a;
        salary = b;

        cout << "Programmer id is " << z /*<< " and language code is :" << a*/ << " and salary is :" << b << " $." << endl;

        cout << "Language code of programmer is :" << language << endl;
    }
};

int main()
{
    employee jay(21510018, 5000.75);
    employee veer(21510035,5000.85);
    programmer tech(21511105, 4000.95);
    programmer techno (21511149,3000.65);
    
    return 0;
}
// *********************End of the program***********************