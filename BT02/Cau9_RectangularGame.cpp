#include<bits/stdc++.h>

using namespace std;

int main() {
    unsigned int res = 0, n, a, b, x = INT_MAX, y = INT_MAX;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        x = min(x,a);
        y = min(y,b);
    }
    
    res = x*y;
    cout << res;
    return 0;
}