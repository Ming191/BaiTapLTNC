#include<bits/stdc++.h>

using namespace std;

int main() {
    double x;
    int y;
    cin >> x >> y;
    double res = 1;
    while(y--) res*=x;
    cout << res;
    return 0;

}