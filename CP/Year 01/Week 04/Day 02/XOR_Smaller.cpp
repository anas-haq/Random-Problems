/*
    Author: Anas
    Date:   30-10-2024
    Time:   21:37:26
    File:   XOR_Smaller.cpp
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
        vector<ll>v(n);
        for(auto &x:v)cin>>x;

        ll ans=1;
        for (ll i = 1; i <n; i++)
        {
            ans^=v[i];
        }
        cout<<ans<<"\n";
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
