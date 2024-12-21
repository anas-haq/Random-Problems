/*
    Author: Anas
    Date:   20-12-2024
    Time:   17:35:50
    File:   C_Wonderful_Number.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test = 1;
    // cin >> test;

    auto Anas = [&]() {
        int n; cin >> n;
        if(!(n&1)){
            cout << "NO";
            return;
        }
        string s="";
        while (n > 0)
        {
            if(n&1){
                s+='1';
            }
            else{
                s+='0';
            }
            n>>=1;
        }
        // cout << s;
        int m = s.size();
        for(int i = 0; i < (m>>1); i++){
            if(s[i]!=s[m-i-1]){
                cout << "NO";
                return;
            }
        }
        cout << "YES";
        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
