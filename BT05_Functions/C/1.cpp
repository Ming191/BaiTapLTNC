#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MAX_SIZE = 10;
const int MINE = -1;
const int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void placeMines(int** board, int m, int n, int K) {
    srand(time(0));
    while (K > 0) {
        int x = rand() % m;
        int y = rand() % n;
        if (board[x][y] != MINE) {
            board[x][y] = MINE;
            K--;
        }
    }
}

int countAdjacentMines(int** board, int m, int n, int x, int y) {
    int count = 0;
    for (int i = 0; i < 8; i++) {
        int newX = x + dx[i];
        int newY = y + dy[i];
        if (newX >= 0 && newX < m && newY >= 0 && newY < n && board[newX][newY] == MINE) {
            count++;
        }
    }
    return count;
}

void printBoard(int** board, int m, int n, bool showMines = false) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == MINE && showMines) {
                cout << "* ";
            } else if (board[i][j] == MINE && !showMines)
            {
                cout << 0 << " ";
            }
            else {
                cout << board[i][j] << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int m, n, K;
    cout << "Enter m, n, K: ";
    cin >> m >> n >> K;

    if (m <= 0 || n <= 0 || K >= m * n || m > MAX_SIZE || n > MAX_SIZE) {
        cout << "Invalid input!";
        return 1;
    }

    // Allocate the board
    int** board = new int*[m];
    for (int i = 0; i < m; i++) {
        board[i] = new int[n]();
    }

    placeMines(board, m, n, K);

    bool alive = true;
    while (alive) {
        int x, y;
        cout << "Enter coordinates x y: ";
        cin >> x >> y;

        if (x < 1 || y < 1 || x > m || y > n) {
            cout << "Invalid coordinates!";
            continue;
        }

        x--; // Adjust for zero indexing
        y--;

        if (board[x][y] == MINE) {
            cout << "YOU'RE DEAD!" << endl;
            printBoard(board, m, n, true);
            alive = false;
        } else {
            int minesCount = countAdjacentMines(board, m, n, x, y);
            board[x][y] = minesCount;

            cout << "Safe! " << minesCount << " mine(s) nearby." << endl;
            printBoard(board, m, n);
        }
    }

    // Deallocate the board
    for (int i = 0; i < m; i++) {
        delete[] board[i];
    }
    delete[] board;

    return 0;
}
