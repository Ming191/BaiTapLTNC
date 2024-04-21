#include<bits/stdc++.h>

using namespace std;

/*
Nông dân John có N (1<=N<=250) con bò đánh số từ 1..N chơi trên bãi cỏ.
Để tránh bị lạc mất các con bò, mỗi con bò có thể được nối với một số con bò khác bằng dây thừng.
Có tất cả M (1 <= M <= N*(N-1)/2) dây thừng nối các con bò. Tất nhiên, không có 2 con bò mà có nhiều
hơn 1 dây thừng nối giữa chúng. Dữ liệu cho biết mỗi cặp con bò c1 và c2 là nối với nhau (1 <= c1 <= N; 1 <= c2 <= N; c1 != c2).

Nông dân John buộc cố định con bò 1 bằng sợi dây xích. Các con bò khác phải nối với con bò 1 bằng một số sợi dây thừng. Tuy nhiên, một số con bò hư hỏng không như vậy. Hãy giúp nông dân John tìm các con bò hư hỏng đó (không kết nối tới bò 1). Dĩ nhiên, con bò thứ 1 luôn nối tới chính nó.

INPUT:

* Dòng 1: 2 số nguyên cách nhau bởi dấu cách: N and M

* Lines 2..M+1: Dòng i+1 cho biết 2 con bò nối với nhau bằng sợi dây thứ i là c1 và c2 cách nhau bởi dấu cách.

OUTPUT FORMAT:
* Nếu không có con bò hư hỏng, in ra 0.
* Ngược lại, in ra trên mỗi dòng 1 số nguyên là thứ tự con bò hư hỏng theo thứ tự tăng dần.


SAMPLE INPUT:

6 4
1 3
2 3
1 2
4 5



SAMPLE OUTPUT:

4
5
6

Giải thích:

Input có thể mô tả như hình dưới đây:
    1---2  4---5
     \  |
      \ |      6
       \|
        3
Dễ thấy, các con bò 4, 5, và 6 không nối tới con bò 1.
*/

vector<vector<int>> graph;
vector<bool> visited;


void DFS(int node)
{
    visited[node] = true;
    for (int& adj : graph[node])
    {
        if (!visited[adj])
        {
            DFS(adj);
        }
    }
}


void BFS(int node)
{
    queue<int> q;
    visited[node] = true;
    q.push(node);

    while (!q.empty())
    {
        int currNode = q.front();
        q.pop();
        for (int i = 0; i<graph[currNode].size(); i++)
        {
            if (!visited[graph[currNode][i]])
            {
                visited[graph[currNode][i]] = true;
                q.push(graph[currNode][i]);
            }   
        }
    }
}

int main()
{
    int m,n;
    cin >> m >> n;
    graph.resize(m+1);
    visited.resize(m+1, false);

    for (int i = 0; i < n; i++)
    {
        int cow1, cow2;
        cin >> cow1 >> cow2;
        graph[cow1].emplace_back(cow2);
        graph[cow2].emplace_back(cow1);
    }

    for (int i = 0; i <= m; i++)
    {
        for (int &x : graph[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
    BFS(1);
    vector<int> ans;

    for (int i = 2; i <= m; i++)
    {
        if (!visited[i])
        {
            ans.emplace_back(i);
        }
    }

    for (int &x:ans)
    {
        cout << x << " ";
    }
}