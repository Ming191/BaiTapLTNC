#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    cout << *min_element(a.begin(),a.end()) << endl;
    cout << *max_element(a.begin(),a.end()) << endl;
    int sumEven = 0;
    int countOdd = 0;

    for (int &x : a) {
        if(x%2) countOdd+=1;
        else sumEven+=x;
    }

    cout << sumEven << endl;
    cout << countOdd << endl;

    return 0;
}
