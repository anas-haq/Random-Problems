/*
    Author: Anas
    Date:   12-11-2024
    Time:   18:03:11
    File:   B_Shoe_Shuffling.cpp
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
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (auto &x : v) cin >> x;
        
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++) {
            mp[v[i]]++;
        }
        
        for (auto [x, y] : mp) {
            if (y == 1) {
                cout << "-1\n";
                return;
            }
        }

        vector<ll> a(n);
        iota(a.begin(), a.end(), 1);
        
        ll i = 0;
        while (i < n) {
            ll j = i;
            while (j < n && v[i] == v[j]) {
                j++;
            }
            
            rotate(a.begin() + i, a.begin() + i + 1, a.begin() + j);
            i = j;            
        }

        for (auto val : a) {
            cout << val << " ";
        }
        cout << "\n";       
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
