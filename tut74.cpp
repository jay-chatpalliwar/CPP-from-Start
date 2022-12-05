#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    int size;

    cout << "Enter the size of array :" << endl;
    cin >> size;

    int array[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the position " << i + 1 << " element in the array :" << endl;
        cin >> (array[i]);
    }

    sort(array, array + size);

    cout << "Elements in the array(in ascending order) are :";
    for (int j = 0; j < size; j++)
    {
        cout << array[j] << " ";
    }

    cout << endl;

    sort(array, array + size, greater<int>());

    cout << "Elements in the array(in decending order) are :";
    for (int k = 0; k < size; k++)
    {
        cout << array[k] << " ";
    }
    return 0;
}