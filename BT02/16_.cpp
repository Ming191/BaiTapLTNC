/*
 Viết chương trình nhập một chữ số từ màn hình, in ra thông báo chữ số đó dưới dạng chữ. Đọc các chữ số đến khi nào chữ số nhập nằm ngoài khoảng 0..9. Nếu giá trị nhập vào nằm ngoài khoảng 0..9 thì dừng chương trình.
Kết quả ví dụ:
Nhap vao mot so trong khoang 0..9: 0
Vua nhap chu so khong
Nhap vao mot so trong khoang 0..9: 5
Vua nhap chu so nam
Nhap vao mot so trong khoang 0..9: 10

*/


#include<bits/stdc++.h>

using namespace std;


int main() {
    int n;
    do {
        cout << "Nhap vao mot so trong khoang 0..9: ";
        cin >> n;

        switch (n) {
            case 0:
                cout << "Vua nhap chu so khong" << endl;
                break;
            case 1:
                cout << "Vua nhap chu so mot" << endl;
                break;
            case 2:
                cout << "Vua nhap chu so hai" << endl;
                break;
            case 3:
                cout << "Vua nhap chu so ba" << endl;
                break;
            case 4:
                cout << "Vua nhap chu so bon" << endl;
                break;
            case 5:
                cout << "Vua nhap chu so nam" << endl;
                break;
            case 6:
                cout << "Vua nhap chu so sau" << endl;
                break;
            case 7:
                cout << "Vua nhap chu so bay" << endl;
                break;
            case 8:
                cout << "Vua nhap chu so tam" << endl;
                break;
            case 9:
                cout << "Vua nhap chu so chin" << endl;
                break;
            default:
                return 0;
        }
    } while (n >= 0 && n <= 9);
    return 0;
}

