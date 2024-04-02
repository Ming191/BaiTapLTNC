#include<bits/stdc++.h>

using namespace std;

string decToBin(int dec)
{
    string res = "";
    while (dec>0)
    {
        string tmp = to_string(dec%2);
        res  = tmp + res;
        dec/=2;
    }
    
    return res;
}

int binToDec(string bin)
{
    int res = 0;
    reverse(bin.begin(), bin.end());
    for(int i = 0; i<bin.length(); i++)
    {
        res += pow(2,i) * (bin[i] - '0');
    }
    return res;
}

int main(){
    cout << decToBin(10) << endl;
    cout << binToDec("1010");
}