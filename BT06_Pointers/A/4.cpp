#include<bits/stdc++.h>
using namespace std;

int binSearch(int* a, int n, int target)
{
    int* l = a;
    int* r = a+n;

    while (l<r)
    {
        int* m = l+(r-l)/2;
        if(*m == target) return m - a;
        else if (*m < target)
        {
            l = m+1;
        } else
        {
            r = m-1;
        }
    }
    return -1;
}

int main()
{
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);

    cout << binSearch(a,n,1);
}