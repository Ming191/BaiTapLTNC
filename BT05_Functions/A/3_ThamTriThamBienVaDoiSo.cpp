#include<bits/stdc++.h>

void swapByValue(int a, int b)
{
    std::cout << "SwapByValue:      " << &a << " " << &b << std::endl;
}

void swapByReference(int &a, int &b)
{
    std::cout << "SwapByRenference: " << &a << " " << &b << std::endl;
}

int main()
{
    int a = 3;
    int b = 2;
    std::cout << "&a = " << &a << " " << "&b = " << &b << std::endl;
    swapByValue(a,b);
    swapByReference(a,b);
}

/*
    &a = 0xe4eb3ff78c &b = 0xe4eb3ff788
    SwapByValue:      0xe4eb3ff760 0xe4eb3ff768
    SwapByRenference: 0xe4eb3ff78c 0xe4eb3ff788
*/