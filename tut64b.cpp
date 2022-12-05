#include <iostream>
using namespace std;

template <class z>

class dotProduct
{
    int size;
    z d = 0;

public:
    z *arr;

    dotProduct(int x)
    {
        size = x;
        arr = new z[size];
    }
    void process(dotProduct &obj)
    {

        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * obj.arr[i];
        }
    }
    void display()
    {
        cout << "The dot product is :" << d << endl;
    }
};

int main()
{
    dotProduct<int> v1(3);
    v1.arr[0] = 1;
    v1.arr[1] = 2;
    v1.arr[2] = 3;

    dotProduct<int> v2(3);
    v2.arr[0] = 4;
    v2.arr[1] = 5;
    v2.arr[2] = 6;
    v1.process(v2);
    v1.display();

    dotProduct<float> v3(2);
    v3.arr[0] = 1.8674;
    v3.arr[1] = 2.3948;

    dotProduct<float> v4(2);
    v4.arr[0] = 4.3408;
    v4.arr[1] = 5.1094;
    v3.process(v4);
    v3.display();
    return 0;
}