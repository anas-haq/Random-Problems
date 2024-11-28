/*
    Author: Anas
    Date:   02-11-2024
    Time:   20:45:38
    File:   B_Startup.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test=1;
    cin >> test;

    auto Anas = [&]() {
        ll n,k;
        cin>>n>>k;
        // vector<pair<ll,ll>>v;
        map<ll,ll>mp;
        ll sum=0;
        for (ll i = 0; i <k; i++)
        {
            ll a,b;
            cin>>a>>b;
            sum+=b;
            mp[a]+=b;
        }
        if(n>=k)
        {
            cout<<sum<<"\n";
            return;
        }
        vector<pair<ll,ll>>v;
        for(auto [a,b]:mp)
        {
            v.push_back({a,b});
        }
        auto cmp=[&](pair<ll,ll>a,pair<ll,ll>b)
        {
            return a.second>b.second;
        };
        sort(v.begin(),v.end(),cmp);
        sum=0;
        for(auto [a,b]:v)
        {
            sum+=b;
            n--;
            if(n<=0)
            {
                break;
            }
 
        }
        cout<<sum<<"\n";
        
        
        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}

