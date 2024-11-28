/*
    Author: Anas
    Date:   20-11-2024
    Time:   21:10:54
    File:   A_XOR_Mixup.cpp
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
        for (ll i = 0; i <n; i++)
        {
            ll ans=0;
            ll k=v[i];
            for(ll j=0;j<n;j++)
            {
                if(j==i)
                {
                    continue;
                }
                ans^=v[j];
            }
            if(ans==k)
            {
                cout<<v[i]<<"\n";
                return;
            }
        }

        // ll ans=3^2^5;
        // cout<<ans;
        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
