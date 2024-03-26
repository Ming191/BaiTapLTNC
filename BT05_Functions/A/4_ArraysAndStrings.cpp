#include<bits/stdc++.h>

using namespace std;

void mod(int arr[])
{
    arr[0] = 4;
}
void modStr(string s)
{
    s = "def";
}

int main(){
    int arr[3] = {1,2,3};
    for(int x : arr) cout << x << " ";
    cout << endl;
    mod(arr);
    for(int x : arr) cout << x << " ";
    /*
    Output:
        1 2 3 
        4 2 3
    Mảng được truyền theo phương thức Pass-by-reference
    */
   cout << endl;

   string s = "abc";
   cout << endl;
   modStr(s);
   cout << s << endl;
   /*   
        Output: abc
        String được truyền theo phương thức Pass-by-value
   */

}