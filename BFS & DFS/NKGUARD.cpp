#include<bits/stdc++.h>
using namespace std;

int m,n;
int a[300][300];
bool visited[300][300] = {};
const int dx[] = {0,0,-1,1};
const int dy[] = {-1,1,0,0};

void bfs(int x, int y)
{
    visited[x][y] = 1;
    queue<pair<int,int>> q;
    q.push({x,y});

    while (!q.empty())
    {
        int currX = q.front().first;
        int currY = q.front().second;

        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int newX = currX + dx[i];
            int newY = currY + dy[i];

            if (newX >= 0 && newX < m && newY >= 0 && newY <n && !visited[newX][newY] && a[newX][newY] >0)
            {
                visited[newX][newY] = 1;
                q.push({newX,newY});
            }
        }
    }
}

void count()
{
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!visited[i][j] && a[i][j] >0)
            {   
                bfs(i,j);
                //cout << i << " " << j << endl;
                count ++;
            }
            
        }
        
    }
    cout << count;
}

int main()
{
    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << endl;
    count();
}