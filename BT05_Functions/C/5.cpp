/*
Viết hàm kiểm tra xem 1 số nguyên dương có phải số nguyên tố hay không. Hàm nhận 01 tham số là số cần kiểm tra. Hàm trả về giá trị 0 nếu đó không là số nguyên tố; giá trị 1 nếu đó là số nguyên tố.
Sử dụng hàm vừa định nghĩa để in ra tất cả các số nguyên tố nhỏ hơn N (với N nhập vào từ bàn phím).
*/


#include<bits/stdc++.h>

using namespace std;

bool sieveOfEratosthenes(int n)
{
    bool isPrime[n+1];
    for (int i = 0; i<n; i++)
    {
        isPrime[i] = 1;
    }
    isPrime[0] = isPrime[1] = 0;
    for (int i = 2; i<n+1; i++)
    {
        if(isPrime[i])
        {
            for (int j = i*i; j<n+1; j+=i)
            {
                isPrime[j] = 0;
            }
            cout << i << " ";
        }
    }
    cout << endl;
    return isPrime[n];
}

int main() {
    int n;
    cin >>n;
    sieveOfEratosthenes(n);
}