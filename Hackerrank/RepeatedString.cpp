#include<bits/stdc++.h>

using namespace std;

long repeatedString(string s, long n) {
    if(s.length()<=1) return n;
    
    vector<int> tmp;
    for (int i = 0; i<s.size(); i++) {
        if(s[i] == 'a') tmp.emplace_back(i);
    }

    int count = 0;

    while (1)
    {
        for (int i = 0; i < tmp.size(); i++)
        {
            cout << tmp[i] << endl;
            if(tmp[i] >= n) return count;
            tmp[i] += s.length();
            count++;
        }
    }
    
    
}
int main()
{
    cout << repeatedString("aba",10);
}

// abaabaabaa
// 0123456789