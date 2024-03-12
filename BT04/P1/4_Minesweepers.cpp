#include<bits/stdc++.h>

using namespace std;

int countMines(vector<vector<char>>& a, int row, int col) {
    int count = 0;
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            if (i == 0 && j == 0) {
                continue;
            }
            if (row + i >= 0 && row + i < a.size() && col + j >= 0 && col + j < a[0].size() && a[row + i][col + j] == '*') {
                count++;
            }
        }
    }
    return count;
}


int main() {
    int n,m;
    cin >> n >> m;
    vector<vector<char>> a(n, vector<char>(m));
    for (int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            cin >> a[i][j];
            if(a[i][j] != '*') a[i][j] = '0';
        }
    }

    for (int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            if(a[i][j] == '*') continue;
            else {
                a[i][j] = countMines(a,i,j)+'0';
            }
        }
    }


    for (int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    

}