#include<bits/stdc++.h>

using namespace std;

void f(int a[])
{
    cout <<  sizeof(a) << endl;
}

void g(int* a)
{
    cout << sizeof(a) << endl;
}


int main()
{
    int a[10];
    cout << sizeof(a) << endl; // trả về kích thước của mảng a;
    f(a); // trả về kích thước của con trỏ là 8 bytes (64-bit)
    g(a);
}
