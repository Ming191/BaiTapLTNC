#include<bits/stdc++.h>

using namespace std;

void bangxoanoc(const int m, const int n)
{
    int** tmp = new int*[m];
    for (int i = 0; i<m; i++)
    {
        tmp[i] = new int[n]();
    }

    tmp[0][n/2] = 1;
    int num = 2;

    int r=0, c=n/2;
    while (num <= n*m)
    {
        int newR = (r-1+m)%m;
        int newC = (c+1+n)%n;
        if(!tmp[newR][newC])
            tmp[newR][newC] = num++;
        else
        {
            newR = (r+1+m)%m;
            newC = c;
            tmp[newR][c] = num++;
        }
        r=newR;
        c=newC; 
    }
    

    for (int i = 0; i<m; i++)
    {
        for (int j = 0; j<n; j++)
        {
            cout << tmp[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    bangxoanoc(3,3);
}