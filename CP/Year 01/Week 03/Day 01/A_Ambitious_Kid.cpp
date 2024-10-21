/*
    Author: Anas
    Date:   21-10-2024
    Time:   23:49:14
    File:   A_Ambitious_Kid.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t=1;
    // cin >> t;

    auto Anas = [&]() {
        ll n,ans=LLONG_MAX;
        cin>>n;
        for (ll i = 0; i <n; i++)
        {
            ll x;
            cin>>x;
            x=abs(x);
            ans=min(ans,x);

        }
        cout<<ans<<"\n";
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
