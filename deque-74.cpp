// *********Example of DEQUE Container***********
#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

void display(deque<int> &D)
{
    deque<int>::iterator Dit = D.begin();

    cout << "Elements in the deque are:";
    for (Dit; Dit != D.end(); Dit++)
    {
        cout << (*Dit) << " ";
    }
}

int main()
{
    int size, element1, element2;
    cout << "Enter the size of the deque :" << endl;
    cin >> size;

    deque<int> mydeque1;
    cout << "Enter elements in the deque::" << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> element1;
        mydeque1.push_front(element1);
    }

    deque<int> mydeque2(4, 96);
    deque<int>::iterator itr = mydeque1.begin();
    mydeque1.insert(itr + 1, 3, 18);
    // mydeque.resize(3);

    sort(mydeque1.begin(), mydeque1.end());

    display(mydeque1);

    cout << endl;
    mydeque2.erase(mydeque2.begin() + 1, mydeque2.begin() + 3);

    display(mydeque2);
    return 0;
}