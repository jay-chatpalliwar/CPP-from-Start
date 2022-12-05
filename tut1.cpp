#include <iostream>
using namespace std;

int main()
{
  int a;
  int i = 10;

  cout << "enter your age:" << endl;
  cin >> a;

  cout << "Your age is ::" << a << endl;
  if (a <= 10)
  {
    while (i <= 90)
    {
      cout << "Your age after " << i << " years is :" << a + i << endl;
      i = i + 10;
    }
  }
  else if (a <= 20)
  {
    while (i <= 80)
    {
      cout << "Your age after " << i << " years is :" << a + i << endl;
      i = i + 10;
    }
  }
  else if (a <= 30)
  {
    while (i <= 70)
    {
      cout << "Your age after " << i << " years is :" << a + i << endl;
      i = i + 10;
    }
  }
  else if (a <= 40)
  {
    while (i <= 60)
    {
      cout << "Your age after " << i << " years is :" << a + i << endl;
      i = i + 10;
    }
  }
  else if (a <= 50)
  {
    while (i <= 50)
    {
      cout << "Your age after " << i << " years is :" << a + i << endl;
      i = i + 10;
    }
  }
  else
  {
    cout << "Your age more than 50 years::" << endl;
  }
  return 0;
}