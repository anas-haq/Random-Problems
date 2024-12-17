/*
    Author: Anas
    Date:   17-12-2024
    Time:   12:28:15
    File:   Reset_bits.cpp
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
        unsigned int n, k; cin >> n >> k;
        unsigned int x = (1<<k)-1;
        unsigned ans = n & (~x);
        cout << ans;
        // unsigned int ans = n & x;        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
