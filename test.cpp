#include <iostream>
using namespace std;

void f(int a[])
{
    cout << sizeof(a);
}
int main()
{
   int a[4];
   cout << sizeof(a);
   f(a);
}