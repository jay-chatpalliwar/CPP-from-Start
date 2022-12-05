// ************Ultimate example(code) of vector,list,map and functors*******************
#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <map>
#include <functional>

using namespace std;

void Vdisplay(vector <int> &V)
{
    cout<<"Elements in 'vecjay' are :";
    vector <int> :: iterator Vit=V.begin();
    for (Vit; Vit!=V.end(); Vit++)
    {
       cout<<(*Vit)<<" ";
    }
}

void Ldisplay(list <char> &L)
{
    list <char> :: iterator Lit=L.begin();

    cout<<"Elements in 'listjay' are :";
    for (Lit ; Lit!=L.end(); Lit++)
    {
       cout<<(*Lit)<<" ";
    }
}

void Mdisplay( map <string,int> &M)
{
    map <string , int > :: iterator Mit=M.begin();
    
    cout<<"Data in 'mapjay' are "<<endl;;
    for (Mit; Mit!=M.end(); Mit++)
    {
        cout<<"Name "<<(*Mit).first<<"::Marks (out of 100) :"<<(*Mit).second<<endl;
    }
    
}

int main()
{
    // ************VECTOR**************

    int element;
    vector <int> vecjay;
    vecjay.push_back(75);
    vecjay.push_back(56);
    vecjay.push_back(49);
    vecjay.push_back(28);
    vecjay.push_back(9);
    sort(vecjay.begin(),vecjay.end());
    Vdisplay(vecjay);

    // **********LIST***************
    cout<<endl;
    list <char> listjay;
    listjay.push_front('J');
    listjay.push_front('O');
    listjay.push_front('H');
    listjay.push_front('A');
    listjay.push_front('V');
    listjay.sort();
    Ldisplay(listjay);

    // ***********MAP************
    cout<<endl;
    map <string , int > mapjay;
    mapjay["JAY"]=96;
    mapjay["SAHIL"]=93;
    mapjay["ABHIRAJ"]=89;
    mapjay["HARSH"]=86;
    mapjay["AMOGH"]=98;
    Mdisplay(mapjay);
   
    return 0;
}