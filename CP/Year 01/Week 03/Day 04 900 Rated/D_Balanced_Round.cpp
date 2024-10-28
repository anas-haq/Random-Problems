/*
    Author: Anas
    Date:   28-10-2024
    Time:   12:03:13
    File:   D_Balanced_Round.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    auto Anas = [&]() {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (auto &x : v) cin >> x;
        
        sort(v.begin(), v.end());
        
        ll cnt = 1, ans = 1;
        for (ll i = 0; i < n - 1; i++) {
            if (abs(v[i] - v[i + 1]) <= k) {
                cnt++;
            } else {
                ans = max(ans, cnt);
                cnt = 1;
            }
        }
        
        ans = max(ans, cnt); 
        cout << n - ans << "\n"; 
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
