#include<bits/stdc++.h>

using namespace std;

int round1(double n)
{
    return (n>0.0)? floor(n+0.5) : ceil(n-0.5);
}

int round2(double n) {
    int intPart = (int)n;
    double fractionalPart = n - intPart;
    if (n >= 0) {
        return (fractionalPart >= 0.5) ? (intPart + 1) : intPart;
    } else {
        return (fractionalPart <= -0.5) ? (intPart - 1) : intPart;
    }
}


int main()
{
    int n;
    cin >> n;
    cout << round1(n) << endl;
    cout << round2(n) << endl;
}