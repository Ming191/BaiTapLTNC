#include <iostream>
#include <vector>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    vector<vector<int>> a(x, vector<int>(y));

    int num = 1;
    int topRow = 0, bottomRow = x - 1, leftCol = 0, rightCol = y - 1;

    while (topRow <= bottomRow && leftCol <= rightCol) {
        for (int col = leftCol; col <= rightCol; col++) {
            a[topRow][col] = num;
            num++;
        }
        topRow++;

        for (int row = topRow; row <= bottomRow; row++) {
            a[row][rightCol] = num;
            num++;
        }
        rightCol--;

        if (topRow <= bottomRow) {
            for (int col = rightCol; col >= leftCol; col--) {
                a[bottomRow][col] = num;
                num++;
            }
            bottomRow--;
        }

        if (leftCol <= rightCol) {
            for (int row = bottomRow; row >= topRow; row--) {
                a[row][leftCol] = num;
                num++;
            }
            leftCol++;
        }
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}