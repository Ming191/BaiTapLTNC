#include<bits/stdc++.h>

using namespace std;

char* concat(const char* a, const char* b )
{
    int i = 0;
    int j = 0;
    while (a[i] != '\0')
    {
        i++;
    }
    while (b[j] != '\0')
    {
        j++;
    }

    char* c = new char[i+j+1];

    for (int m = 0; m < i; m++)
    {
        c[m] = a[m]; 
    }
    for (int m = 0; m < j; m++)
    {
        c[m+i] = b[m]; 
    }
    c[i+j] = '\0';
    return c;
}

int main() 
{
    const char* a = "hello";

    cout << concat("hello", "world");
}