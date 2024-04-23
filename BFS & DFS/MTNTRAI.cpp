#include<bits/stdc++.h>

using namespace std;

/*
MTNTRAI - Nông Trại

 
Trong trại chăn nuôi của John có nuôi một số con gà. Trong khi John đang ngủ say, những 
con cáo đói đã vào trại và tấn công đàn gà.
Trại có dạng hình chữ nhật gồm các ô được đánh số bởi hàng và cột. Mỗi ô chứa một 
kí tự : kí tự “.” là ô trống, kí tự „#‟ là hàng rào, kí tự “c” là gà, kí tự “f” là cáo. Chúng ta coi 
2 ô là cùng một chuồng nếu có thể di chuyển từ ô nọ sang ô kia bằng đường đi chỉ gồm các 
đường theo hàng ngang hoặc thẳng đứng mà không bị vướng vào hàng rào. 
May thay, những con gà cũng biết tự vệ. Chúng có thể mổ chết những con cáo trong chuồng 
nếu số lượng gà lớn hơn số lượng cáo trong cùng chuồng. Ngược lại, những con cáo sẽ ăn 
hết gà trong chuồng đó.
Ban đầu, các con gà và các con cáo đã được xác định trong các miền của trại. Viết chương 
trình tính số lượng gà và số lượng cáo còn lại vào sáng hôm sau

Trong trại chăn nuôi của John có nuôi một số con gà. Trong khi John đang ngủ say, những con cáo đói đã vào trại và tấn công đàn gà.

Trại có dạng hình chữ nhật gồm các ô được đánh số bởi hàng và cột. Mỗi ô chứa một kí tự : kí tự “.” là ô trống, kí tự „#‟ là hàng rào, kí tự “c” là gà, kí tự “f” là cáo. Chúng ta coi 2 ô là cùng một chuồng nếu có thể di chuyển từ ô nọ sang ô kia bằng đường đi chỉ gồm các đường theo hàng ngang hoặc thẳng đứng mà không bị vướng vào hàng rào. May thay, những con gà cũng biết tự vệ. Chúng có thể mổ chết những con cáo trong chuồng nếu số lượng gà lớn hơn số lượng cáo trong cùng chuồng. Ngược lại, những con cáo sẽ ăn hết gà trong chuồng đó.

Ban đầu, các con gà và các con cáo đã được xác định trong các miền của trại. Viết chương 

trình tính số lượng gà và số lượng cáo còn lại vào sáng hôm sau

 
Input

- Dòng đầu chứa 2 số nguyên dương m, n là số hàng và số cột của trại (m,n<=1000) 

- m dòng tiếp theo, dòng i chứa n kí tự, ký tự thứ j là ký hiệu của ô (i,j) trong trại.
Output

- gồm một dòng duy nhất lần lượt là số cáo và số gà còn lại trong trại.

Example

Input:
8 8
.#######
#..c...#
#.####.#
#.#f.#.#
#.#.c#c#
#c.##..#
#.f..f.#
.######.


Output:
1 3
*/
int m,n;
int a[300][300];
bool visited[300][300] = {};
const int dx[] = {0,0,-1,1};
const int dy[] = {-1,1,0,0};
int countC = 0;
int countF = 0;
int totalChick = 0;
int totalFox = 0;

void dfs(int x, int y)
{
    visited[x][y] = 1;

    if (a[x][y] == 1) countC++;
    if (a[x][y] == 2) countF++;

    if(a[x][y] != -1)
    for (int i = 0; i < 4; i++)
    {
        {
            int newX = x + dx[i];
            int newY = y + dy[i];

            if (newX >= 0 && newX < n && newY >=0 && newY <m && !visited[newX][newY] && a[newX][newY] != -1)
            {
                dfs(newX, newY);
            }   
        }
    }
}

void res()
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!visited[i][j] && a[i][j] != -1)
            {
                countC =0;
                countF =0;

                dfs(i,j);
                if (countC > countF)
                {
                    totalFox-=countF;
                } else
                {
                    totalChick -=countC;
                }
            }
        }
    }
    cout << totalFox << endl;
    cout << totalChick << endl;
}
int main()
{
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char c;
            cin >> c;
            if (c == '.')
            {
                a[i][j] = 0;
            } else if ( c=='#')
            {
                a[i][j] = -1;
            } else if (c == 'c')
            {   
                totalChick++;
                a[i][j] = 1; 
            } else 
            {
                totalFox++;
                a[i][j] = 2;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout <<setw(2) << a[i][j] << " ";
        }
        cout << endl;
   }  

   res();
}