/*
    Author: Anas
    Date:   05-10-2024
    Time:   20:13:17
    File:   C_Anonymous_Informant.cpp
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
        vector<ll>v(n+1);
        for (ll i = 1; i <=n; i++)
        {
            cin>>v[i];
        }
        
        ll sesh=n;

        for (ll i = 0; i <min(k,n); i++)
        {
            if(v[sesh]>n)
            {
                cout<<"No\n";
                return;
            }
            sesh-=v[sesh];
            if(sesh<1)
            {
                sesh+=n;
            }
        }
        cout<<"Yes\n";
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
