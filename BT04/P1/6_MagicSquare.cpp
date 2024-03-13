#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n] = {};

    a[0][n/2] = 1;

    int i = 0;
    int j=n/2;
    while(1)
    {   
        if(a[(i-1+n)%n][(j+1+n)%n] == 0 )
            {
            a[(i-1+n)%n][(j+1+n)%n] =  a[i][j]+1;
            i=(i-1+n)%n;
            j=(j+1+n)%n;
            }
        else if(a[(i-1+n)%n][(j+1+n)%n] != 0 && a[i+1][j] == 0)
        {
            a[i+1][j] = a[i][j]+1;
            i=i+1;
            j=j;
        } else if(a[(i-1+n)%n][(j+1+n)%n] != 0 && a[i+1][j] != 0)
        {
            break;
        }
    }

    for (int x = 0; x<n; x++)
    {
        for(int y = 0; y<n; y++)
        {
            cout << a[x][y] << " ";
        }
        cout << endl;
    }

    return 0;
}