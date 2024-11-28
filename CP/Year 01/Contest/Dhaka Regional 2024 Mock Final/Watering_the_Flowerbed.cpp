/*
    Author: Anas
    Date:   09-11-2024
    Time:   14:37:31
    File:   p1.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test;
    cin >> test;
    ll c = 1;

    while (test--) {
        ll n, d;
        cin >> n >> d; 
        
        ll total = 0;
        
        for (ll i = 0; i < n; i++) {
            ll D, M;
            cin >> D >> M; 
            ll days = d ; 
            // ll water = max(D, M);
            
            ll waterings = (days / D);
            
            total += waterings ; 
        }

        cout << "Case " << c << ": " << total << "\n";
        c++;
    }
    
    return 0;
}