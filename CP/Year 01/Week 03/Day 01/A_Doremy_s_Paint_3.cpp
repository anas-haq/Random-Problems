/*
    Author: Anas
    Date:   22-10-2024
    Time:   01:53:07
    File:   A_Doremy_s_Paint_3.cpp
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
        map<ll,ll>mp;
        for (ll i = 0; i <n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        if(mp.size()==1)
        {
            cout<<"Yes\n";
        }
        else if(mp.size()==2)
        {
            ll y;
            for(auto [a,b]:mp)
            {
                y=b;
                break;
            }
            ll x=n-y;
            if(abs(x-y)<=1)
            {
                cout<<"Yes\n";
            }
            else
            {
                cout<<"No\n";
            }
            
        }
        else
        {
            cout<<"No\n";
        }
        
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
