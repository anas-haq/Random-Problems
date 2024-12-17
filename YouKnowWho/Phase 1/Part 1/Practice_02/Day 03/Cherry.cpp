/*
    Author: Anas
    Date:   17-12-2024
    Time:   11:16:03
    File:   Cherry.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test = 1;
    cin >> test;

    auto Anas = [&]() {
        int n; cin >> n;
        vector<ll> v(n);
        for (auto &x: v) cin >> x;
        ll ans = 1;
        for (int i = 0; i < n-1; i++){
            ll twopro = v[i]*v[i+1];
            ans = max(ans,twopro);
        }

        cout << ans <<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
