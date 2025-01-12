/*
    Author: Anas
    Date:   26-12-2024
    Time:   23:07:30
    File:   Large_Factorial.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int mod = 1e9+7;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    cin >> test;

    auto Anas = [&]() {
        int n; cin >> n;
        ll ans = 1;
        for(int i = 1; i <=n; i++){
            ans= ((ans%mod)*(i%mod)) % mod;
        }
        cout << ans <<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
