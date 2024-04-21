#include<bits/stdc++.h>

using namespace std;

bool check(int N,  vector<int>& a) {
    vector<int> res(1000);

    for (int num : a) {
        if(res[num] > 0)
        {
            return true;
        }
        res[num] =1;
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