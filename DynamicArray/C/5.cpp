#include<bits/stdc++.h>

using namespace std;

void xoanOc(const int m, const int n)
{
    int** tmp = new int*[m];
    for (int i = 0; i<m; i++)
    {
        tmp[i] = new int[n]();
    }
    int num = 1;
    int left_col = 0;
    int top_row = 0;
    int right_col = n-1;
    int bot_row = m-1;
    while (num <= m*n)
    {
        for (int i = left_col; i<= right_col; i++)
        {
            tmp[top_row][i] = num++;
        }
        top_row++;
        if (num > m*n)
        {
            break;
        }
        for (int i = top_row; i<= bot_row; i++)
        {
            tmp[i][right_col] = num++;
        }
        right_col--;
        if (num > m*n)
        {
            break;
        }
        for (int i = right_col; i >= left_col; i--)
        {
            tmp[bot_row][i] = num++;
        }
        bot_row--;
        if (num > m*n)
        {
            break;
        }
        for (int i = bot_row; i >= top_row; i--)
        {
            tmp[i][left_col] = num++;
        }
        left_col++;
        if (num > m*n)
        {
            break;
        }
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
    int m,n;
    cin >> m >> n;

    xoanOc(m,n);
}