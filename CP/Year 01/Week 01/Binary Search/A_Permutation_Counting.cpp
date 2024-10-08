/*
    Author: Anas
    Date:   07-10-2024
    Time:   15:45:06
    File:   A_Permutation_Counting.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t = 1;
    cin >> t;

    auto Anas = [&]() {
        ll n, k;
        cin >> n >> k;

        vector<ll> v(n + 1);
        for (ll i = 1; i <= n; i++) {
            cin >> v[i];
        }

        auto check = [&](ll ok) {
            ll a = 0;
            for (ll i = 1; i <= n; i++) {
                if (v[i] < ok) {
                    a += (ok - v[i]);
                }
            }
            return a <= k;
        };

        ll l = 1, r = 3e12, mid, ans;
        while (l <= r) {
            mid = (l + r) / 2;
            if (check(mid)) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        for (ll i = 1; i <= n; i++) {
            if (v[i] < ans) {
                k -= (ans - v[i]);
                v[i] = ans;
            }
        }

        if (k > 0) {
            sort(v.begin() + 1, v.end());
            for (ll i = 1; i <= k; i++) v[i]++;
        }

        ll ans1 = (ans - 1) * n + 1; 
        for (ll i = 1; i <= n; i++) {
            if (v[i] > ans) ans1++;
        }

        cout << ans1 << "\n";
    };

    while (t--) {
        Anas();
    }

    return 0;
}
