/*
    Author: Anas
    Date:   16-12-2024
    Time:   12:32:41
    File:   Count.cpp
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
        string s; cin >> s;
        ll ans = 0, n = s.size();
        for (int i = 0; i < n; i++){
            int x = s[i]-'0';
            ans+=x;
        }
        cout << ans;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
