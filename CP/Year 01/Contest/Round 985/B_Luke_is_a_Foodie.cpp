/*
    Author: Anas
    Date:   14-11-2024
    Time:   00:57:10
    File:   B_Luke_is_a_Foodie.cpp
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
        ll n,x;
        cin>>n>>x;
        vector<ll>v(n);
        for(auto &x:v)cin>>x;

        ll mn=v[0],mx=v[0];
        ll ans=0;

        for (ll i =1; i <n; i++)
        {
            if(v[i]<mn)
            {
                mn=v[i];
            }
            if(v[i]>mx)
            {
                mx=v[i];
            }
            if(((mx-mn+1)/2)>x)
            {
                ans++;
                mn=v[i];
                mx=v[i];
            }
        }
        cout<<ans<<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
