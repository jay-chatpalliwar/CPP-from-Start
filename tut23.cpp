#include <iostream>
using namespace std;

class shop
{
    int id[100];
    int price[100];
    int counter;

public:
    void initcounter() { counter = 0; }
    void setprice();
    void display();
};

void shop::setprice()
{
    cout << "Enter item id :" << endl;
    cin >> id[counter];

    cout << "Enter price :" << endl;
    cin >> price[counter];
    counter++;
}

void shop::display()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "item id is " << id[i] << " and price is " << price[i] << endl;
    }
}

int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.display();

    return 0;
}