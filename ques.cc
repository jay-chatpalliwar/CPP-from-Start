#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <string>
#include <algorithm>
using namespace std;

void displayV(vector<int> &V)
{
    vector<int>::iterator vit = V.begin();

    cout << "Displaying elements from vector :";
    for (vit; vit != V.end(); vit++)
    {
        cout << (*vit) << " ";
    }
}

void displayL(list<int> &L)
{
    list<int>::iterator lit = L.begin();

    cout << "Displaying elements from list :";
    for (lit; lit != L.end(); lit++)
    {
        cout << (*lit) << " ";
    }
}

void displayM(map<string, int> &M)
{
    map<string, int>::iterator mit = M.begin();

    cout << "Displaying data from map :" << endl;
    for (mit; mit != M.end(); mit++)
    {
        cout << "Name in data is " << (*mit).first << " and marks are :" << (*mit).second << endl;
    }
}

int main()
{
    int size;
    int elementV;
    int elementL;
    int elementM;
    string name;

    vector<int> myV;
    vector<int>::iterator Vit = myV.begin();

    cout << "Enter the size :" << endl;
    cin >> size;

    cout << "Enter the 'VECTOR' elements :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> elementV;
        myV.push_back(elementV);
    }

    sort(myV.begin(), myV.end());

    list<int> myL;
    list<int>::iterator Lit = myL.begin();

    cout << "Enter the 'LIST' elements :" << endl;
    for (int j = 0; j < size; j++)
    {
        cin >> elementL;
        myL.push_front(elementL);
    }

    map<string, int> myM;
    map<string, int>::iterator Mit = myM.begin();

    cout << "Enter the 'MAP' data (MARKS OUT OF 100) :" << endl;
    for (int k = 0; k < size; k++)
    {
        cin >> name >> elementM;
        myM.insert({name, elementM});
    }

    myL.sort();

    displayV(myV);

    cout << endl;

    displayL(myL);

    cout << endl;

    displayM(myM);

    return 0;
}