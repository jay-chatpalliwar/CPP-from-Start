#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int arr1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr2[3][3] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    
cout << "Displaying the matrix::" << endl;

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cout << arr2[i][j] << "\t";
    }
    cout << endl;
}
return 0;
}