#include <iostream>
using namespace std;

class documents
{
    int roll[100];
    int marks[100];
    int srnumber;

public:
    void counter()
    {
        srnumber = 0;
    }
    void setdata();
    void display();
};
void documents ::setdata()
{
    cout << "Enter the student " << srnumber + 1 << " roll no.:" << endl;
    cin >> roll[srnumber];

    cout << "Enter the marks(total) obtained :" << endl;
    cin >> marks[srnumber];
    srnumber++;
}
void documents ::display()
{
    for (int i = 0; i < srnumber; i++)
    {
        cout << "Entered student "
                " roll no. is "
             << roll[i] << " and marks out of 500 is " << marks[i] << endl;
    }
}

int main()
{
    documents jay;
    jay.counter();
    jay.setdata();
    jay.setdata();
    jay.setdata();
    jay.display();
    return 0;
}