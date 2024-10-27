/*
    Author: Anas
    Date:   26-10-2024
    Time:   20:50:23
    File:   B_Stalin_Sort.cpp
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
        for (ll i = 0; i <n; i++)
        {
            cin>>v[i];
        }
        ll cnt=1e9;
        for(ll i=0;i<n;i++)
        {
            ll sum=i;
            for(ll j=i+1;j<n;j++)
            {
                if(v[j]>v[i])
                {
                    sum++;
                }
            }
            cnt=min(cnt,sum);
        }
        cout<<cnt<<"\n";
        
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
