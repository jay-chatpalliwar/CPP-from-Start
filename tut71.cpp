// **********Creating first ever vector in C++********************

#include<bits/stdc++.h>
using namespace std;

template <class T>

void output(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout<<v.at(i)<<" ";--->Alternative of cout<<v[i]<<" ":
    }
}

int main()
{
    int size;
    int element;
    cout << "Enter the size of the vector :" << endl;
    cin >> size;

    vector<int> vint;
    cout << "Enter the element int the vector : ";
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        vint.push_back(element);
    }
    output(vint);
// Syntax of using iterators in vectors for using certain member functions.

    vector<int>::iterator iter = vint.begin();
    vint.insert(iter + 2, 2, 55);
    cout << endl;
    output(vint);
    sort(vint.begin(),vint.end());
    cout<<endl;
    output(vint);

    return 0;
}