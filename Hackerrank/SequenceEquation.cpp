#include<bits/stdc++.h>

using namespace std;

vector<int> permutationEquation(vector<int> p) {
    vector<int> p1(p.size());

    for (int i = 1; i <= p.size(); i++)
    {
        for (int j = 0; j < p.size(); j++)
        {
            if (i == p[j])
            {
                for (int k = 0; k < p.size(); k++)
                {
                    if (j+1 == p[k])
                    {
                        p1[i-1] = k+1;
                    }
                    
                }
                
            }
            
        }
    }
    return p1;
}

int main()
{
    vector<int> a = {4, 3, 5, 1, 2};
    for(int&x : permutationEquation(a)) cout << x;
}

// 4 3 5 1 2