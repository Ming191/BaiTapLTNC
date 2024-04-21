    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {
        int local = 0;

        int* a = &local;

        delete a; 

        cerr << a;

        
    }

    /*
    PS D:\CP\BaiTapLTNC\DynamicArray\A> cd "d:\CP\BaiTapLTNC\DynamicArray\A\" ; if ($?) { g++ 4.cpp -o 4 } ; if ($?) { .\4 }
    4.cpp: In function 'int main()':
    4.cpp:10:16: warning: 'void operator delete(void*, std::size_t)' called on unallocated object 'local' [-Wfree-nonheap-object]
       10 |         delete a; //
          |                ^
    4.cpp:6:13: note: declared here
        6 |         int local = 0;
          |             ^~~~~
    */