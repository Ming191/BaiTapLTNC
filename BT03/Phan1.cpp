#include<bits/stdc++.h>

using namespace std;

struct Point
{
    int x, y;

    Point midPoint(Point a1, Point a2) const
    {
        Point res;
        res.x = (a1.x + a2.x)/2;
        res.y = (a1.y + a2.y)/2;
        return res;
    }
};
void print(Point p) {
        cout << p.x << " " << p.y;
    }

int main() {
    Point point;
    point.x = 10;
    point.y = 12;
    print(point);

}
