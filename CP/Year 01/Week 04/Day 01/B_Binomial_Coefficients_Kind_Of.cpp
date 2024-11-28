/*
    Author: Anas
    Date:   29-10-2024
    Time:   22:25:22
    File:   B_Binomial_Coefficients_Kind_Of.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll mod=1e9+7;
const ll n=1e5;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    // cin >> t;
    vector<ll>v(n+1);
    
    ll k=1;
    v[0]=k;
    for (ll i = 1; i <n; i++)
    {
        v[i]=v[i-1]*2;
        v[i]%=mod;
    }

    auto Anas = [&]()
    {
        ll x;
        cin>>x;
        vector<ll>a(x);
        for (ll i = 0; i <x; i++)
        {
            cin>>a[i];
        }
        for (ll i = 0; i <x; i++)
        {
            ll z;
            cin>>z;
            cout<<v[z]<<"\n";
        }      
    };
    while (t--)
    {
        Anas();
    }

    return 0;
}
