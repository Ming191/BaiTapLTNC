#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int i = 1;
    double res = 0;
    while(i<=5) {
        cout << "Diem mon hoc " << i << ": ";
        cin >> n;
        res += n;
    }
    cout << "Diem trung binh cua 5 mon hoc: " << res/5;
    return 0;
}