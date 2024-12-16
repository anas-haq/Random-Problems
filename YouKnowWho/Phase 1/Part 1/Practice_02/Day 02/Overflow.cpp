/*
    Author: Anas
    Date:   16-12-2024
    Time:   13:06:19
    File:   Overflow.cpp
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
        ll a,b; cin >> a >> b;
        ll ans = a*b;
        cout << ans;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
