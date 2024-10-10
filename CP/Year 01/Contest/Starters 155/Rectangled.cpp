/*
    Author: Anas
    Date:   09-10-2024
    Time:   20:35:49
    File:   Rectangled.cpp
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
        ll n;
        cin >> n;
        ll mx = 0;
        
        for (ll i = 1; i<= n/2; i++) {
            ll j=(n/2)-i;
            // if(j>0)
            // {
                ll ans=i*j;
                mx=max(mx,ans);
            // }
        }
        
        cout << mx << "\n";
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
