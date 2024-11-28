/*
    Author: Anas
    Date:   16-11-2024
    Time:   22:59:45
    File:   C_Assembly_via_Minimums.cpp
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
        ll m=(n*(n-1))>>1;
        vector<ll>v(m);
        for(auto &x:v)cin>>x;

        sort(v.begin(),v.end());
        for (ll i = 0; i <m; i+=n)
        {
            cout<<v[i]<<" ";
            n--;
        }
        cout<<1000000000<<"\n";
        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
