// ***********Example of Associative container::SET******************
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int myint[] = {18, 40, 18, 72, 18, 27, 18, 39, 18, 18, 30, 18};

    set<int> myset(myint, myint + 12);
    set<int>::iterator iter = myset.begin();

    myset.insert(iter, 22);
    myset.insert(iter, 33);
    myset.insert(iter, 44);

    cout << "Elements in 'myset' are :";
    for (iter; iter != myset.end(); iter++)
    {
        cout << (*iter) << " ";
    }

    return 0;
}
