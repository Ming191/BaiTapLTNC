/*
(**) Rectangular Game. Cho một lưới vuông hai chiều vô tận với ô ở góc trái dưới có tọa độ (1,1). Tất cả các ô ban đầu đều có giá trị bằng 0. Hãy chơi một trò chơi.
Trò chơi gồm N bước. Mỗi bước, bạn được cho một cặp số nguyên a và b. Giá trị của mỗi ô tọa độ (u,v) thỏa mãn 1 ≤ u ≤ a và 1 ≤ v ≤ b đều được tăng thêm 1 đơn vị. Sau N bước như vậy, nếu X là giá trị lớn nhất trong tất cả các ô. Bạn hãy cho biết có bao nhiêu số X trong lưới?
Input:
Dòng đầu tiên của input chứa số N. N dòng tiếp theo, mỗi dòng chứa hai số nguyên a và b, cách nhau bởi một dấu cách.
Output:
Ghi ra một số kiểu int là số số X
Ràng buộc:
1 ≤ N ≤ 100
1 ≤ a ≤ 1000000
1 ≤ b ≤ 1000000
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    unsigned int res = 0, n, a, b, x = INT_MAX, y = INT_MAX;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        x = min(x,a);
        y = min(y,b);
    }
    
    res = x*y;
    cout << res;
    return 0;
}