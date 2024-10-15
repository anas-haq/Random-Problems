/*
    Author: Anas
    Date:   15-10-2024
    Time:   23:27:58
    File:   B_Informatics_in_MAC.cpp
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
        set<ll>s;
        for (ll i = 0; i <n; i++)
        {
            cin>>v[i];
            s.insert(v[i]);
            mp[v[i]]++;
        }
        ll cnt=0;
        for(auto i:s)
        {
            if(i!=cnt)
            {
                break;
            }
            cnt++;
        }
        set<ll>s2;
        vector<pair<ll,ll>>dekhi;
        ll shuru=1;
        for (ll i = 0; i <n; i++)
        {
            if(v[i]<cnt)
            {
                s2.insert(v[i]);
            }
            if(s2.size()==cnt)
            {
                dekhi.push_back({shuru,i+1});
                shuru=i+2;
                s2.clear();
            }
            
        }
        if(dekhi.size()==1)
        {
            cout<<"-1\n";
            return;
        }
        ll i=dekhi.size();
        dekhi[i-1].second=n;
        cout<<i<<"\n";
        for(auto [a,b]:dekhi)
        {
            cout<<a<<" "<<b<<"\n";
        }
        // cout<<"\n";      

        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
