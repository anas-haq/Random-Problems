/*
    Author: Anas
    Date:   17-12-2024
    Time:   11:35:41
    File:   Maximum_Subarray_Sum.cpp
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
        vector<ll> v(n);
        for (auto &x :v) cin >> x;
        ll ans = -1e9, sum = -1e9;
        for ( ll l = 0; l < n; l++){
            // sum = max(sum,)
            ans = max(v[l], v[l] + ans);
            // cout << ans << " ";
            sum = max(sum, ans);
        }
        cout<< sum;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
