#include<bits/stdc++.h>

/*
Lỗi sử dụng con trỏ. Hãy chạy chương trình thử nghiệm các đoạn code sau. Chú thích vào code đâu là các dòng gây lỗi và đó là lỗi gì.
 int* p = new int;
 int* p2 = p;
 *p = 10;
 delete p; 
*p2 = 100;
 cout << *p2;
 delete p2;
*/

int main()
{
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p; 
    *p2 = 100; // p2 đang truy cập vào một vùng nhớ đã được giải phóng
    std::cout << *p2;
    delete p2;
}