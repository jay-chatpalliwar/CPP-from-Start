 #include <iostream>
 #include <vector>
 #include <algorithm>
 using namespace std;

 void output(vector <float > &v)
 {
     vector <float> :: iterator itr=v.begin();

     cout<<"displaying elements in the vector ::";
     for (itr; itr!=v.end(); itr++)
     {
         cout<<(*itr)<<" ";
     }
     
 }
 
 int main()
 {
    int size ;
    float element;
    int check;

    vector <float > Fvec;

    cout<<"Enter the size :"<<endl;
    cin>>size;

cout<<"Enter the elements :"<<endl;

    for (int i = 0;i < size ; i++)
    {
      cin>>element;
      Fvec.push_back(element);

    }

    output(Fvec);

    cout<<endl<<"Enter the element you want to find in the sequence :"<<endl;
    cin>>check;
    vector <float > :: iterator it;
    it=find(Fvec.begin(),Fvec.end(),check);

    if (it!=Fvec.end())
    {
        cout<<"Element "<<check<<" found at "<<it-Fvec.begin()+1<<" position from start."<<endl;
    }
    
    else 
    {
        cout<<"No data found for your search ."<<endl;

    }

     return 0;
 }