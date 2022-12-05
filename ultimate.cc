// ***********Ultimate example of pointers and arrays********************

#include <iostream>

using namespace std;

int main()
{
    string num[5];
    cout << "Enter characters in the array 'num' :" << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> num[i];
    }

    for (int j = 0; j < 5; j++)
    {
        cout << num[j]<<" ";
    }

    string *ptr = &num[0];

    for (int k = 0; k < 5; k++)
    {
        cout << endl
             << *(ptr + k) << endl;
    }
    return 0;
}