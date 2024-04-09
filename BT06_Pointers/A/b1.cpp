#include<bits/stdc++.h>
using namespace std;

int main( )
{ 
   char a[4] = "abc"; 
   for (char *cp = a; (*cp) != '\0'; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   } 

   int b[4] = {1,2,3,4};
   for (int &x : b)
   {
        cout << &x << " : " << x << endl;
   }

   double c[4] = {1.1, 1.2, 1.3,1.4};
   for (double *x = c; *x != 1.4; x+=2)
   {
        cout << x << " : " << *x << endl; 
   }
   return 0;
}

//Chuyện gì xảy ra nếu thay cp++ bằng cp+=2 ? Hãy tính trước kết quả và thử lại bằng chương trình. (làm cho kết quả câu c)

//Con trỏ sẽ trỏ đến những vùng nhớ chưa đc khai báo

/*
0x61873ffdfc : a
0x61873ffdfd : b
0x61873ffdfe : c
0x61873ffde0 : 1
0x61873ffde4 : 2
0x61873ffde8 : 3
0x61873ffdec : 4
0x61873ffdc0 : 1.1
0x61873ffdd0 : 1.3
0x61873ffde0 : 4.24399e-314
0x61873ffdf0 : 0
0x61873ffe00 : 2.06955e-312
0x61873ffe10 : 2.06955e-312
0x61873ffe20 : 2.06955e-312
0x61873ffe30 : 1.05561e-311
0x61873ffe40 : 0
0x61873ffe50 : 0
0x61873ffe60 : 0
0x61873ffe70 : 0
0x61873ffe80 : 0
0x61873ffe90 : 0
0x61873ffea0 : 0
0x61873ffeb0 : 0
0x61873ffec0 : 0
0x61873ffed0 : 0
0x61873ffee0 : 0
0x61873ffef0 : 0
0x61873fff00 : 0
0x61873fff10 : 0
0x61873fff20 : 0
0x61873fff30 : 2.68432e-311
0x61873fff40 : 1.63042e-322
0x61873fff50 : 0
0x61873fff60 : 0
0x61873fff70 : 0
0x61873fff80 : 0
0x61873fff90 : 0
0x61873fffa0 : 0
0x61873fffb0 : 0
0x61873fffc0 : 0
0x61873fffd0 : 0
0x61873fffe0 : 0
0x61873ffff0 : 0
*/