#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int num;
    int a=1;
    int j = 1;

    cout << "Enter the number :" << endl;
    cin >> num;

    cout << "The factorial " << num << "! is :" << endl;
    for (int i = 1; i < num; i++)
    {
        j = j * (a + i);
    }
    cout << j;

    return 0;
}