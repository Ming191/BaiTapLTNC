#include<bits/stdc++.h>

using namespace std;

void f(int &a)
{
    cout << &a << endl;
}

int main()
{
    //a.
    int a = 10;
    int c = 5;
    cout << &a << endl;
    f(a);
    /*
        Biến tham chiếu và biến mà nó chiếu tới là cùng một biến trong bộ nhớ vì có cùng địa chỉ
        Output:
            0x11215ffd6c
            0x11215ffd6c
    */

    // int &b; Error: 	"message": "reference variable \"b\" requires an initializer",
    /*
        Không thể khai báo một tham chiếu mà không chiếu nó đến một biến thường
    */


    // int &b = a;
    // &b = c;
    /*
        Error: expression must be a modifiable lvalue
        Không thể chiếu b đến biến khác sau khi đã khởi tạo &b = a;
    */
    
}