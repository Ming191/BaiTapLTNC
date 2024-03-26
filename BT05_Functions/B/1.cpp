#include<bits/stdc++.h>

using namespace std;

bool Majority(bool a, bool b, bool c)
{
    return (a&&b) || (a&&c) || (b&&c);
}

int main() {
    cout << Majority(1,1,0) << endl;
    cout << Majority(1,0,0) << endl;
}