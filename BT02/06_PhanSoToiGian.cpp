#include<bits/stdc++.h>

using namespace std;

int ucln(int a, int b) {
    if(b == 0) return a;
    return ucln(b, a%b);
}
int main() {
    int a,b;
    cin >> a >> b;
    if(!(a%b)) cout << a/b << endl;
    else cout << a/ucln(a,b) << "/" << b/ucln(a,b);
    return 0;
}