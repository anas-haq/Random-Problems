/*
    Author: Anas
    Date:   26-10-2024
    Time:   20:42:31
    File:   A_Rectangle_Arrangement.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t=1;
    cin >> t;

    auto Anas = [&]() {
        ll n;
        cin>>n;
        ll mx=LLONG_MIN,mx2=LLONG_MIN;
        for (ll i = 0; i < n; i++)
        {
            ll a,b;
            cin>>a>>b;
            mx=max(a,mx);
            mx2=max(b,mx2);

        }
        ll ans=mx+mx2;
        ans*=2;
        cout<<ans<<"\n";
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
