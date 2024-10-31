/*
    Author: Anas
    Date:   31-10-2024
    Time:   21:02:09
    File:   B_Black_Cells.cpp
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
        vector<ll>v(n);
        for(auto &x:v)cin>>x;
        sort(v.begin(),v.end());
        if(n==1){cout<<1<<"\n";return;}
        if(n&1)
        {
            ll mn=LLONG_MAX;
            for (ll i = 0; i < n; i++)
            {
                vector<ll>k;
                for(ll j=0;j<n;j++)
                {
                    if(i==j)continue;
                    k.push_back(v[j]);
                }
                ll cnt=LLONG_MIN;
                for(ll j=0;j<n-1;j+=2)
                {
                    cnt=max(cnt,abs(k[j]-k[j+1]));
                }
                k.clear();
                mn=min(cnt,mn);
            }
            cout<<mn<<"\n";

            return;
        }
        ll mx=LLONG_MIN;
        
        for(ll i=0;i<n-1;i+=2)
        {
            mx=max(abs(v[i]-v[i+1]),mx);
        }
        cout<<mx<<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
