#include <bits/stdc++.h>
using namespace std;

int main() {
   double a, b, c;
   cout << "Nhap 3 canh cua tam giac: ";
   cin >> a >> b >> c;

   if (a + b > c && a + c > b && b + c > a) {
      cout << a << ", " << b << ", " << c << " la 3 canh cua 1 tam giac" << endl;

      int chuVi = a + b + c;
      cout << "Chu vi tam giac la: " << chuVi << endl;

      if (a == b && b == c) {
         cout << "Tam giac deu" << endl;
      }
      else if (a == b || b == c || a == c) {
         cout << "Tam giac can" << endl;
      }
      else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
         cout << "Tam giac vuong" << endl;
      }
      else {
         cout << "Tam giac thuong" << endl;
      }
   }
   else {
      cout << a << ", " << b << ", " << c << " khong phai la 3 canh cua tam giac." << endl;
   }

   return 0;
}