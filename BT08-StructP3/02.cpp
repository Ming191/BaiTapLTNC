#include<bits/stdc++.h>

using namespace std;

struct point
{
    int x,y;
};


void pByValue(point p)
{
    cout << &p << endl;
}

void pByRef(const point &p)
{
    cout << &p << endl;
}

int main()
{
    point p;
    p.x = 10;
    p.y = 20;

    cout << &p << endl;
    pByRef(p);
    pByValue(p);
}

/*
0x2adf1ff7b8
0x2adf1ff7b8
0x2adf1ff790
*/