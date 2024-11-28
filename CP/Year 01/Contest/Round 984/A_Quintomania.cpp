/*
    Author: Anas
    Date:   02-11-2024
    Time:   20:36:22
    File:   A_Quintomania.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll test;
    cin >> test;

    auto Anas = [&]() {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (auto &x : v) cin >> x;

        bool ok = true;
        for (ll i = 0; i < n - 1; i++) {
            ll o = abs(v[i] - v[i + 1]);
            if (o == 5 || o == 7) {
                continue;
            }
            else
            {
                ok = false;
                break;
            }
        }

        if (ok) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    };

    while (test--) {
        Anas();
    }

    return 0;
}
