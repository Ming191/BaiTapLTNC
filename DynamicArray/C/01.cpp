#include<bits/stdc++.h>

using namespace std;

const char* isDup(const int* a, const int n)
{
    int* check = new int[n];

    for (int i = 0; i < n; i++)
    {
        check[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (check[i] > 1)
        {
            delete[] check;
            return "YES";
        }
        check[a[i]] = 1;
    }
    delete[] check;
    return "NO";
}

int main()
{
    int n;
    cin >> n;
    int* a = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    cout << isDup(a,n);
}