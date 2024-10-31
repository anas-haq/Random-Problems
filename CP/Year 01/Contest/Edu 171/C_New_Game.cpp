/*
    Author: Anas
    Date:   31-10-2024
    Time:   21:45:06
    File:   C_New_Game.cpp
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
        vector<ll>v(n);
        map<ll,ll>mp;
        for (ll i = 0; i <n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        vector<pair<ll,ll>>a;
        for(auto [x,y]:mp)
        {
            a.push_back({x,y});
        }
        ll l=0,r=0,cnt=0,sum=0,mn=LLONG_MIN,pre=a[0].first;
        n=a.size();
        while (r<n)
        {
            auto [x,y]=a[r];           
            if(x-pre>1)
            {
                mn=max(sum,mn);
                // cout<<mn<<"\n";
                l=r;
                sum=0;
            }
            sum+=y;
            if(r-l+1==k)
            {
                mn=max(sum,mn);
                sum-=a[l].second;
                l++;
            }            
            pre=x;
            r++;
        }
        mn=max(sum,mn);
        cout<<mn<<"\n";
        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
