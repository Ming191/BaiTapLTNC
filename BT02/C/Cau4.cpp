/*
Viết chương trình Prime đọc vào một số và in ra 'yes' nếu đó là một số nguyên tố. Nếu không thì in ra 'no'.
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i<=n; i++) {
        for (int j = i; j>1; j--) {
            cout << " ";
        }
        for (int j = n-i; j>=1; j--) {
            cout << "*";
        }
        cout << "*";
        for (int j = n-i; j>=1; j--) {
            cout << "*";
        }
        for (int j = i; j>1; j--) {
            cout << " ";
        }
        cout << endl;

    }
    return 0;
}

