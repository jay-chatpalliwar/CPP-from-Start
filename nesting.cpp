#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void print(map<pair<string , string> , vector<int> > &st)
{
    auto it=st.begin();

    for (it;it!=st.end();it++)
    {
        auto &name = it->first;

        cout<<name.first<<" "<<name.second<<endl;
        for(int i=0;i<it->second.size();i++)
        cout<<it->second[i]<<" ";

        cout<<endl;
    }
    
}

int main()
{
    map<pair<string , string> , vector<int> > st;

    int N;
    cin>>N;

    for (int i = 0; i < N; i++)
    {
        string a,b;
        cin>>a>>b;
        int n,x;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            st[{a,b}].push_back(x);
        }
        
    }
    print(st);
    
    return 0;
}