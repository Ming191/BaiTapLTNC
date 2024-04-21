#include<bits/stdc++.h>
#include<queue>

using namespace std;
const int maxN = 300;
int a[maxN][maxN];
int m,n;
bool visited[maxN][maxN];
const int dx[] = {0,0,-1,1};
const int dy[] = {-1,1,0,0};

int bfs(int x, int y)
{
    int res = 0;
    queue<pair<int,int>> q;
    q.push({x,y});
    visited[x][y] = 1;
    while (!q.empty())
    {
        pair<int,int> currPoint = q.front();
        int x = currPoint.first;
        int y = currPoint.second;

        q.pop();
        res++;
        for (int i = 0; i < 4; i++)
        {
            if (x + dx[i] >= 0 && x + dx[i] < m && y + dy[i] >= 0 && y + dy[i] < n && a[x+dx[i]][y+dy[i]] == 1 && !visited[x+dx[i]][y+dy[i]])
            {
                q.push({x+dx[i], y+dy[i]});
                visited[x+dx[i]][y+dy[i]] = 1;
            }
            
        }
    }
    return res;
    
}

int main()
{   
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            visited[i][j] = false;
        }
    }
    vector<int> res;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 1 && !visited[i][j])
            {
                res.emplace_back(bfs(i,j));
            }
            
        }
    }
    cout << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }   
    cout << endl;

    for(int &x : res) cout << x << " ";
}