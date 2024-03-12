#include<bits/stdc++.h>

using namespace std;

bool check(string s) {
    int l = 0;
    int h = s.length()-1;
    while (l<h)
    {
        if(s[l] != s[h]) {
            return false;
        } else {
            l++;
            h--;
        }
    }
    return true;
    
}

int main() {
    string s;
    cin >> s;
    check(s) ? cout << "YES" : cout << "NO";
}