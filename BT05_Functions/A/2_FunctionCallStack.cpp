#include<bits/stdc++.h>

using namespace std;

long factorial(int x)
{   
    cout << "x = " << x << " at " << &x << endl;
    if(x==1) return x;
    return x*factorial(x-1);
}

int main()
{
    int x = 5;
    cout << factorial(x);
}

/*
Địa chỉ của x đi từ cao xuống thấp, cách nhau một khoảng nhất định và bằng nhau (=0x30)
x = 5 at 0xada2bffa90
x = 4 at 0xada2bffa60
x = 3 at 0xada2bffa30
x = 2 at 0xada2bffa00
x = 1 at 0xada2bff9d0
*/