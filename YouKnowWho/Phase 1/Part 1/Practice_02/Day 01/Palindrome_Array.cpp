/*
    Author: Anas
    Date:   15-12-2024
    Time:   10:50:36
    File:   Palindrome_Array.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test=1;
    // cin >> test;

    auto Anas = [&]() {
        int n;cin>>n;

        vector<int>s(n);
        for(auto &x:s)cin>>x;

        for(int i=0;i<(n>>1);i++){
            if(s[i]!=s[n-i-1]){
                cout<<"NO\n";
                return;
            }
        }

        cout<<"YES\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
