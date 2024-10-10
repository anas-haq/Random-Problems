/*
    Author: Anas
    Date:   06-10-2024
    Time:   23:02:52
    File:   B_All_Pairs_Segments.cpp
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
        ll n,q;
        cin>>n>>q;
        vector<ll>v(n);
        for (ll i = 0; i <n; i++)
        {
            cin>>v[i];
        }
        map<ll,ll>mp;
        for (ll i = 0; i <n; i++)
        {
            ll t=((i+1)*(n-i))-1;
            mp[t]++;
            if(i>0)
            {
                ll k=i*(n-i);
                ll x=v[i]-v[i-1]-1;
                mp[k]+=x;
                // cout<<mp[k]<<" "<<k<<" "<<x<<"\n";
            }
        }
        while (q--)
        {
            ll i;
            cin>>i;
            cout<<mp[i]<<" ";
        }
        cout<<"\n";
        
        
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
