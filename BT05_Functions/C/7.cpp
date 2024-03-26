#include<bits/stdc++.h>

using namespace std;

void printLine(int M, int N) {
    for (int i = 0; i < M; i++) {
        cout << " "; 
    }
    for (int i = 0; i < N; i++) {
        cout << "*"; 
    }
    cout << endl;
}

void printTriangle(int rows) {

    int stars = 1;
    for (int i = 1; i <= rows; i++) {
        printLine(rows - i, stars);
        stars += 2; 
    }
}


int main()
{
    int n;
    cin >> n;
    printTriangle(n);
}
