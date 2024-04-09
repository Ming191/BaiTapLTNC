#include<bits/stdc++.h>
using namespace std;

int count_even(int* a, int n)
{
    int count = 0;
    for (int i = 0; i<n; i++)
    {
        if(!(a[i]%2)) count++;
    }
    return count; 
}

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(a)/sizeof(a[0]);

    cout << count_even(a,n-5) << endl;
    cout << count_even(a+n-5, n-5) << endl;

}