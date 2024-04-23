#include<bits/stdc++.h>

using namespace std;

int a[300][300];
int m,n;
const int dx[] = {0,0,1,-1};
const int dy[] = {1,-1,0,0};
vector<vector<int>> visited(300,vector<int>(300,0));

/*
BCISLAND - Nước biển
Trái đất nóng lên kéo theo mực nước biển dâng. Hòn đảo nhỏ Gonnasinka thuê bạn để dự báo trước hiểm họa này. Cho trước 1 lưới tọa độ thể hiện cao độ của đảo, hãy giúp họ tính toán xem nước biển dâng cao bao nhiêu thì hòn đảo sẽ bị chia cắt.

Input

Input gồm nhiều bộ test, mỗi bộ test bao gồm:

Dòng đầu ghi 2 số n, m là chiều dài và chiều rộng.
Sau đó là n dòng, mỗi dòng gồm m số, mỗi số cho biết độ cao của ô đó, giá trị 0 chỉ mực nước biển. Những ô giá trị 0 dọc theo đường viền và những ô số 0 liền kề những ô này chỉ mặt biển. Những ô có giá trị 0 còn lại (được bao bọc bởi các số > 0) là đất liền bên trong đảo nhưng có độ cao ngang mặt nước biển. Hòn đảo lúc đầu chưa bị chia cắt. Số n và m không lớn hơn 100 và độ cao không lớn hơn 1000.
Dòng cuối cùng của input chứa 2 số 0
Output

Với mỗi bộ test, in ra:

Case n: Island splits when ocean raises f feet. (Đảo bị chia khi nước biển dâng cao f feet)

Hoặc

Case n: Island never splits. (Đảo không bao giờ bị chia cắt)

Example
Input:
5 5

3 4 3 0 0

3 5 5 4 3

2 5 4 4 3

1 3 0 0 0

1 2 1 0 0

5 5

5 5 5 5 7

4 1 1 1 4

4 1 2 1 3

7 1 0 0 4

7 3 4 4 4

0 0

Output:
Case 1: Island never splits.

Case 2: Island splits when ocean rises 3 feet.
*/

void dfs(int x, int y, int thresHold)
{
    visited[x][y] = true;

    for (int i = 0; i < 4; i++)
    {
        int newX = x+dx[i];
        int newY = y+dy[i];
        
        if (newX >= 0 && newX < n && newY>=0 && newY < m && !visited[newX][newY] && a[newX][newY] > thresHold)
        {
            dfs(newX,newY,thresHold);
        }
    }
}

void bfs(int x,int y, int thresHold)
{
    visited[x][y] =true;

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

            if (newX >= 0 && newX < m && newY >= 0 && newY <n && !visited[newX][newY] && a[newX][newY] > thresHold)
            {
                visited[newX][newY] = true;
                q.push({newX,newY});
            }
            
        }
        
    }
    
}

void countDFS()
{
    for (int k = 1; k < 10; k++)
    {
        visited = vector<vector<int>>(300,vector<int>(300,0));
        int thresHold = k;
        int count = 0;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(!visited[i][j] && a[i][j] > thresHold)
                {
                    dfs(i,j,k);
                    count++;
                }
            }
        }
        if (count > 1)
        {
            cout << k;
            break;
        }
    }
    cout << 0;
}

void countBFS()
{
    for (int k = 1; k < 10; k++)
    {
        visited = vector<vector<int>>(300,vector<int>(300,0));
        int thresHold = k;
        int count = 0;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(!visited[i][j] && a[i][j] > thresHold)
                {
                    bfs(i,j,k);
                    count++;
                }
            }
        }
        if (count > 1)
        {
            cout << k;
            break;
        }
    }
    cout << 0;
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
    countBFS();
}