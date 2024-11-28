/*
    Author: Anas
    Date:   17-11-2024
    Time:   13:06:04
    File:   C_Concatenation_of_Arrays.cpp
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
        ll n;
        cin>>n;
        vector<pair<ll,ll>>v;

        for (ll i = 0; i <n; i++)
        {
            ll x,y;
            cin>>x>>y;
            v.push_back({x,y});
        }
        
        auto cmp=[&](pair<ll,ll>a,pair<ll,ll>b)
        {
            // return a.second<b.second;
            // if(a.first==b.second)
            // {
            //     return a.second<b.second;
            // }
            // else
            // {
                return a.first<b.first;
            // }
        };

        sort(v.begin(),v.end(),cmp);

        for (auto [x,y]:v)
        {
            cout<<x<<" "<<y<<" ";
        }
        cout<<"\n";
        

    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
