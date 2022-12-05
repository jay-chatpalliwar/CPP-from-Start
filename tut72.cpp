#include <iostream>
#include <list>

using namespace std;

void output(list<int> &l)
{
    list<int>::iterator it = l.begin();
    for (it; it != l.end(); it++)
    {
        cout << *it << " ";
    }
}

int main()
{
    list<int> list1(5);
    list<int> list2(3, 123);

    list<int>::iterator i1 = list1.begin();
    *i1 = 32;
    i1++;
    *i1 = 85;
    i1++;
    *i1 = 46;
    i1++;
    *i1 = 66;
    i1++;
    *i1 = 29;
    output(list1);
    // cout << endl;
    // list1.pop_front(); //--->REMOVES the first element value in the list "list1".
    // output(list1);
    // cout << endl;
    // list1.pop_back(); //---->REMOVES the last element value in the list "list1".
    // output(list1);
    // cout << endl;
    // list1.remove(46); //---->REMOVES 46 from the list "list1".
    // output(list1);
    // cout << endl;
    // list1.reverse(); //--->REVERSES the order of elementd in the list "list1".
    // output(list1);
    // cout << endl;
    // list1.sort(); //---->ARRANGES the elements in the list "list1" in ascending order.
    // output(list1);
    // //Merging two lists:: ::
    //         cout
    //     << endl;
    // output(list2);
    // cout << endl;
    // list1.merge(list2);
    // output(list1);
    // //SWAPPING the two lists:: : cout << endl;
    // output(list2);
    // cout << endl;
    // list1.swap(list2);
    // cout << "List1 after swapping :";
    // output(list1);
    // cout << endl;
    // cout << "List2 after swapping :";
    // output(list2);
    // cout << endl;
    // list1.resize(3); //---->RESIZES the list "list1" to three(3) elements.
    // output(list1);
    cout<<endl;
    list1.resize(8,1000);
    output(list1);
    return 0;
}