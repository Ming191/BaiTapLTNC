#include<bits/stdc++.h>
using namespace std;

int spawn(int n)
{
    return rand()%n;
}

int main()
{
    int n;
    cin >> n;
    cout << spawn(n);
}