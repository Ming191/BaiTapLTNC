#include<bits/stdc++.h>

using namespace std;

int a[300][300];
int m,n;
const int dx[] = {0,0,1,-1};
const int dy[] = {1,-1,0,0};

bool visited[300][300] = {0};

void dfs(int x, int y) {
    
    visited[x][y] = true;

    for (int i = 0; i < 4; i++)
    {
        int newX = x + dx[i];
        int newY = y + dy[i];
        if (newX>=0 && newX <m && newY >=0 && newY<n && !visited[newX][newY] && a[newX][newY] == 1)
        {
            dfs(newX, newY);
        }
    }
    
}

int main() {
    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char c;
            cin >> c;
            if (c == 'W')
            {
                a[i][j] = 1;
            } else a[i][j] = 0;
        }
    }

    int count = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 1 && !visited[i][j])
            {
                dfs(i,j);
                count++;
            }
            
        }
    }
    
    cout << count;
}