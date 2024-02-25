/*
Viết chương trình nhập vào 1 số n (n < 100) và in ra ma trận n x n dạng như sau. 
Ví dụ:input
10
output:
  1  2  3  4  5  6  7  8  9 10
  2  3  4  5  6  7  8  9 10  1
  3  4  5  6  7  8  9 10  1  2
  4  5  6  7  8  9 10  1  2  3
  5  6  7  8  9 10  1  2  3  4

*/

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