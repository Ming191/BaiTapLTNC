#include<bits/stdc++.h>
using namespace std;

struct point
{
    int x,y;
};


int main()
{
    point p;
    p.x = 10;
    p.y = 10;
    cout << &p << " " << &p.x << " " << &p.y << endl;
}

//0x875d9ffb98 0x875d9ffb98 0x875d9ffb9c
//&p.x == &p và địa chỉ của p.y cao hơn 4 bytes