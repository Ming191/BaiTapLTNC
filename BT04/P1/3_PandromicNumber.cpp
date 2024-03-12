    #include<bits/stdc++.h>

    using namespace std;

    bool check(long long n) {
        long long res = 0;
        while(res < n) {
            res = res*10 + n%10;
            n/=10;
        }
        return (res == n || res == n/10 );
    }

    int main() {
        int q;
        cin >> q;
        while (q--)
        {
            int count = 0;
            long long l,h;
            cin >> l >> h;

            while (l <= h)
            {
                if(check(l)) count++;
                l++;
            }

            cout << count << endl;
            
        }
        return 0;
        
    }

    // 23132