#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> m(10,0);
    for (int &x:a)
    {
        cin >> x;
        m[x]++;
    }

    for(int i = 0; i<10; i++)
    {
        cout << i << " " << m[i] << endl;
    }
    return 0;
}

