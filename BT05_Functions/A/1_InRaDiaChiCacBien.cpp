#include<bits/stdc++.h>

using namespace std;

int main()
{
    int c = 0;
    int a[3] = {1,2,3};
    char b[3] = {'a', 'b', 'c'};
    cout << &c << endl;
    for (int i = 0; i<3; i++)
    {
        cout << &a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i<3; i++)
    {
        cout << (void*)&b[i] << " ";
    }
}

// Địa chỉ của các phần tử trong mảng a cách nhau 4 byte. Output: 0xc160fffadc 0xc160fffae0 0xc160fffae4 
// Địa chỉ của các phần tử trong mảng b cách nhau 1 byte. Output: 0xc160fffad9 0xc160fffada 0xc160fffadb 