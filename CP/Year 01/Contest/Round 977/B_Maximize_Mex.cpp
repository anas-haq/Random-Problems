/*
    Author: Anas
    Date:   06-10-2024
    Time:   21:34:50
    File:   B_Maximize_Mex.cpp
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
        ll n,x;
        cin>>n>>x;
        vector<ll>v(n);
        map<ll,ll>mp,mp1;
        for (ll i = 0; i <n; i++)
        {
            cin>>v[i];
            mp1[v[i]]++;
        }     
        ll ans=0;
        while (true)
        {
            if(mp1[ans]>0)
            {
                mp1[ans]--;
                ll a=mp1[ans];
                mp[ans%x]+=a;
                ans++;
            }
            else if(mp[ans%x]>0)
            {
                mp[ans%x]--;
                ans++;
            }
            else
            {
                break;
            }            
        }
        
        
        cout<<ans<<"\n";
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
