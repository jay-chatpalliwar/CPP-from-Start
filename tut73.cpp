#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> result;
    result["Jay"] = 99;
    result["Sahil"] = 98;
    result["Prabhav"] = 84;
    result["Abhiraj"] = 70;
    result["Ayush"] = 72;
    result["Harsh"] = 49;

    result.insert({{"Kazama",97},{"Shinchan",98}});
    //---->Syntax to insert key-value pairs in map

    map<string, int>::iterator itr = result.begin();

    for (itr; itr != result.end(); itr++)
    {
        cout << "Student with name " << (*itr).first << " has obtained " << (*itr).second << " marks out of 100." << endl;
    }

    cout<<"Size of the map is ::"<<result.size()<<endl;
    
    return 0;
}