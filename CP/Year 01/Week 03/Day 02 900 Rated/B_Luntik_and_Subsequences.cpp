/*
    Author: Anas
    Date:   23-10-2024
    Time:   23:35:49
    File:   B_Luntik_and_Subsequences.cpp
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
        ll n,cnt1=0,cnt=0;
        cin>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]==1)
            {
                cnt1++;
            }
            if(v[i]==0)
            {
                cnt++;
            }
        }
        ll ans=1LL<<cnt;
        ans*=cnt1;
        cout<<ans<<"\n";
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
