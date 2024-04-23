#include<bits/stdc++.h>

using namespace std;
int pickingNumbers(vector<int> a) {
    sort(a.begin(), a.end());
    vector<int> tmp(a.size(), 0);
    for (int i = 0; i < a.size(); i++)
    {
        int count = 1;
        int start = a[i];
        for(int j = i+1; j< a.size(); j++)
        {
            if(a[j] - start <= 1) count++;
        }
        tmp[i]=count;
    }
    return *max_element(tmp.begin(),tmp.end());
}
int main()
{
    vector<int> a = {4, 6, 5, 3, 3, 1};
    cout << pickingNumbers(a);
}

// 1 3 3 4 5 6