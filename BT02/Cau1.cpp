#include<bits/stdc++.h>

using namespace std;

bool sieve(int n) {
    vector<bool> a(n+1,1);
    a[0] = a[1] = false;
    for (int i = 0; i<=n+1; i++) {
        if(a[i] == 1) {
            for (int j = i*i; j<=n+1 ;j += i) {
                a[j] = false;
            }
        }
    }
    return a[n];
}

int main() {
    int n;
    cin >> n;
    cout << boolalpha << sieve(n);
    return 0;
}