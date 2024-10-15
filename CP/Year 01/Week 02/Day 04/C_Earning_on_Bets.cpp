/*
    Author: Anas
    Date:   15-10-2024
    Time:   20:13:04
    File:   C_Earning_on_Bets.cpp
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

        ll l=1;
        // ll lcm
        auto lcm=[&](ll i,ll j)
        {
            return ((i/__gcd(i,j))*j);
        };
        for(ll i=0;i<n;i++)
        {
            l=lcm(l,v[i]);
        }
        vector<ll>bits(n);
        for (ll i = 0; i <n; i++)
        {
            bits[i]=l/v[i];
        }
        ll ans=accumulate(bits.begin(),bits.end(),0LL);
        if(ans>=l)
        {
            cout<<"-1\n";
            return;
        }
        for (auto i:bits)
        {
            cout<<i<<" ";
        }
        cout<<'\n';
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
