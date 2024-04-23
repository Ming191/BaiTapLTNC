#include<bits/stdc++.h>

using namespace std;

struct point
{
    int x, y;
};

int main()
{
    point p1;
    p1.x = 1;
    p1.y = 2;

    point p2 = p1;

    cout << p1.x << " " << p2.x;
    cout << endl;
    p1.x = 10;
    cout << p1.x << " " << p2.x;
}