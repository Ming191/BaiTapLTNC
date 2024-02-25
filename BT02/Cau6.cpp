#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int start = 1;

    while(start <= n) {
        vector<int> a(n,0);
        a[0] = start;
        for (int i = 1; i<n ; i++) {
            a[i] = a[i-1] + 1;
            if (a[i] > n) a[i] = a[i] - n;
        }
        for (int x : a) cout << x << " ";
        cout << endl;
        start++;
    }
}