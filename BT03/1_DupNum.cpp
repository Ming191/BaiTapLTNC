#include<bits/stdc++.h>

using namespace std;

bool check(int N,  vector<int>& a) {
    unordered_set<int> numSet;

    for (int num : a) {
        if (numSet.count(num) > 0) {
            return true;
        }
        numSet.insert(num);
    }

    return false;
}

int main() {
    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    if (check(N, a)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}