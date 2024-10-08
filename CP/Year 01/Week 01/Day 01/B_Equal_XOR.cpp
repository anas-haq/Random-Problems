/*
    Author: Anas
    Date:   01-10-2024
    Time:   18:53:18
    File:   B_Equal_XOR.cpp
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
        ll n,k;
        cin>>n>>k;
        vector<ll>v(n*2);
        map<ll,ll>mp1,mp2;
        vector<ll>ans1,ans2;
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
            mp1[v[i]]++;
            if(mp1[v[i]]==2)
            {
                ans1.push_back(v[i]);
                ans1.push_back(v[i]);
            }
        }
        for (ll i = n; i <2*n; i++)
        {
            cin>>v[i];
            mp2[v[i]]++;
            if(mp2[v[i]]==2)
            {
                ans2.push_back(v[i]);
                ans2.push_back(v[i]);
            }
        }
        ll cnt=ans1.size();
        if(cnt>2*k)
        {
            while (cnt>2*k)
            {
                ans1.pop_back();
                ans2.pop_back();
                cnt--;
            }            
        }
        else
        {
            for (auto i:mp1)
            {
                if(cnt==2*k)
                {
                    break;
                }
                if(i.second==1 && mp2[i.first]==1)
                {
                    ans1.push_back(i.first);
                    ans2.push_back(i.first);
                    cnt++;
                }
            }            
        }
        for(auto i:ans1)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
        for(auto i:ans2)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
