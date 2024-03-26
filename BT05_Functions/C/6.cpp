#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if(!b) return a;
    return gcd(b,a%b);
}

int main() {
    int a = 6;
    int b = 7;
    cout << ((gcd(a,b) == 1 && a!=b)? "YES" : "NO");
}