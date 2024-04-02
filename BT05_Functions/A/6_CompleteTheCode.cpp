#include<bits/stdc++.h>

using namespace std;

void f(int xval)
{
   int x;
   x = xval;
   // in địa chỉ của x tại đây
   cout << &x << endl;
}
void g(int yval)
{
   int y;
   // in địa chỉ của y tại đây
   cout << &y << endl;
}
int main()
{
   f(7);
   g(11);
   return 0;
} 
/*
    Output: 0xcf7e3ffc7c
            0xcf7e3ffc7c
    Địa chỉ của x và y là giống nhau;
    Sau khi hàm f được giải phóng, hàm g thế chỗ vào StackFrame của f khiến cho địa chỉ của y có thể giống với địa chỉ của x;
*/