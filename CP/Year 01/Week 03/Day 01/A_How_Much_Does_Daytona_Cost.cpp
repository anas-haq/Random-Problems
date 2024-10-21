/*
    Author: Anas
    Date:   22-10-2024
    Time:   00:54:55
    File:   A_How_Much_Does_Daytona_Cost.cpp
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
        vector<ll>v(n);
        for(auto &x:v)cin>>x;
        bool ok=false;
        for (ll i = 0; i < n; i++)
        {
            if(v[i]==k)
            {
                ok=true;
                break;
            }
        }
        if(ok)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        
        

    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
