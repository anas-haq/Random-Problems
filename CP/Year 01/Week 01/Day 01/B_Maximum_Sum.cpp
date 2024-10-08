/*
    Author: Anas
    Date:   02-10-2024
    Time:   11:23:10
    File:   B_Maximum_Sum.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll mod=1e9+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t=1;
    cin >> t;

    auto Anas = [&]() {
        ll n,k;
        cin>>n>>k;
        vector<ll>v(n);
        for(auto &x:v)cin>>x;
        ll ans=0,sum=0;
        for (ll i = 0; i <n; i++)
        {
            sum+=v[i];
            ans=max(ans,sum);
            sum=max(sum,0LL);
        }
        ll ah=(accumulate(v.begin(),v.end(),0LL)%mod+mod)%mod;
        for (ll i = 0; i <k; i++)
        {
            ah=(ah+ans)%mod;
            ans=(ans*2)%mod;
        }
        cout<<ah<<"\n";        
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
