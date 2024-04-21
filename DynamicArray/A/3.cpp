#include<bits/stdc++.h>

using namespace std;

int main()
{
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a'; 
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c; // ??? em nghĩ nên delete a chứ không phải c vì c chỉ là con trỏ đc trỏ đến a+3 chứ không phải là con trỏ đc sinh ra từ new;
    cerr << "a after deleting c:" << "-" << a << "-" << endl;// lỗi ở đây
}