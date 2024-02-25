#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int temp = -1;
    while(cin >> n) {
        if(n == temp) continue;
        temp = n;
        cout << n << " ";
        if(n<0) break;

    }
}