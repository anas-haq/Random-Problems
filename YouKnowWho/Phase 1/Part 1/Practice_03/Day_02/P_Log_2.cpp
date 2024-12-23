/*
    Author: Anas
    Date:   21-12-2024
    Time:   18:33:58
    File:   P_Log_2.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int GetLog2(ll n){
    if(n == 1){
        return 0;
    }
    // cout << n <<" ";
    int ans = GetLog2((n>>1));
    // ans++;
    // cout << ans <<" ";
    return ++ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;

    auto Anas = [&]() {
        ll n; cin >> n;
        // cout<<log2(n)<<'\n';
        int ans = GetLog2(n);
        // ll ans = log2(n);
        cout << ans;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
