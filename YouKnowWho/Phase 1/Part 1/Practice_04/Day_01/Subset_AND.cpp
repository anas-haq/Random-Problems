/*
    Author: Anas
    Date:   28-01-2025
    Time:   00:40:38
    File:   Subset_AND.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    cin >> test;

    auto Anas = [&]() {
        int n,k; cin >> n >> k;
        vector<int>v(n);
        for(auto &x:v) cin >> x;
        int ans = v[0];
        for(int i = 1; i < n; i++){
            ans &= v[i];
        }
        if(ans >= k){
            cout <<"NO\n";
            return;
        }
        cout <<"YES\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
