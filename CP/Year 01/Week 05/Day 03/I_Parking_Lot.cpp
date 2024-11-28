/*
    Author: Anas
    Date:   14-11-2024
    Time:   10:26:45
    File:   I_Parking_Lot.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test=1;
    // cin >> test;

    auto Anas = [&]() {
        ll n;
        cin>>n;
        ll k=1<<n;
        // cout<<k;
        ll ans=(2*n)-2;
        ans*=n;
        ans*=2;
        cout<<ans;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
