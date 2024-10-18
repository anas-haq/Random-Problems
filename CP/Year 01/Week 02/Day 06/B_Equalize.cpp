/*
    Author: Anas
    Date:   19-10-2024
    Time:   01:20:00
    File:   B_Equalize.cpp
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
        ll n,ans=0;
        cin>>n;

        vector<ll>v;
        set<ll>s;

        for(ll i=0;i<n;i++)
        {
            ll a;cin>>a;
            s.insert(a);
        }
        for(auto i:s)
        {
            v.push_back(i);
        }

        for(ll i=0;i<v.size();i++)
        {
            ll x=v[i];
            auto k=lower_bound(v.begin(),v.end(),x+n);
            ll y=k-v.begin()-i;
            ans=max(ans,y);
        }

        cout<<ans<<"\n";
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
