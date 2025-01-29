/*
    Author: Anas
    Date:   28-01-2025
    Time:   19:35:10
    File:   Sum_of_product_of_pairs.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int mod = 1e9+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;

    auto Anas = [&]() {
        int n; cin >> n;
        int mod = 1e9+7;
        vector<int>v(n);
        ll sum = 0;
        for(auto &x:v){
            cin >> x;
            sum+=x;
            sum%=mod;
        }
        ll ans = 0;
        for(auto x: v){
            sum-=x;
            if(sum < 0){
                sum+=mod;
            }
            ans+= x*sum;
            ans%=mod;
        }
        cout << ans <<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
