#include<bits/stdc++.h>
using namespace std;

void spawn(int a[], int N)
{
    for (int i = 0; i<N; i++) a[i] = rand()%50;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                if ((a[i] + a[j] + a[k]) % 25 == 0) {
                    cout << "(" << a[i] << ", " << a[j] << ", " << a[k] << ")" << endl;
                }
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    spawn(a,n);
}