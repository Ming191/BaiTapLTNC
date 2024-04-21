#include<bits/stdc++.h>

using namespace std;

const int dx[] = {0,0,-1,1};
const int dy[] = {-1,1,0,0};

void domin(const int m, const int n)
{
    int** tmp = new int*[m];
    for (int i = 0; i<m; i++)
    {
        tmp[i] = new int[n];
    }

    for (int i = 0; i<m; i++)
    {
        for (int j = 0; j<n; j++)
        {
            char c;
            cin >> c;
            tmp[i][j] = (c=='*')? -1 : 0;
        }
    }

    for (int i = 0; i<m; i++)
    {
        for (int j = 0; j<n; j++)
        {
            if (tmp[i][j] == -1)
            {
                for (int x = -1; x<=1; x++)
                {
                    for (int y = -1; y<=1; y++)
                    {
                        int newX = i+x;
                        int newY = j+y;

                        if (newX >= 0 && newX <m && newY >= 0 && newY <n && tmp[newX][newY] != -1)
                        {
                            tmp[newX][newY] += 1;
                        }
                    }
                    
                }
                
            }
            
        }
    }
    
    for (int i = 0; i<m; i++)
    {
        for (int j = 0; j<n; j++)
        {
            if (tmp[i][j] == -1)
            {
                cout << "* ";
            } else cout << tmp[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n,m;
    cin >> n >> m;
    domin(n,m);
}