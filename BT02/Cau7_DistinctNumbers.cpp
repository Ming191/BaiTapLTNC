/*
(*) Viết chương trình DistinctNumbers với nhiệm vụ đọc một chuỗi số từ input chuẩn (bàn phím) kết thúc ở số âm đầu tiên, và in ra các số đó theo đúng thứ tự, nhưng nếu có các số liền nhau cùng giá trị thì chỉ in ra một lần. Chương trình chỉ được dùng các biến kiểu cơ bản, không được dùng mảng, string, hay các cấu trúc dữ liệu khác.
Ví dụ input:
1 2 2 2 2 4 2 3 5 5 -1
Output tương ứng:
1 2 4 2 3 5 -1

*/


#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int temp = -1;
    while(cin >> n) {
        if(n == temp) continue;
        temp = n;
        cout << n << " ";
        if(n<0) break;

    }
}