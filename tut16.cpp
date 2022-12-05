#include <iostream>
using namespace std;
// **************Call by reference using Pointers*************************
// Just use pointers to store address of actual parameters in formal parameters*****************
// void swapPointer(int* a, int* b)
// {
//   int temp=*a;
//   *a=*b;
//   *b=temp;
// }
// int main()
// {  
//   int x=8,y=9;
//   cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
//   swapPointer (&x,&y);

//   cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
//   return 0;
// }
// **************Call by reference using Pointers*************************
void swapReferenceVar (int &a, int &b)
{
   int c=a;
   a=b;
   b=c;

} 
  int main()
  {   
      int x=8,y=9;

      cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
      swapReferenceVar(x,y);
      cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

      return 0;
  }