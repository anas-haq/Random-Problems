/*
    Author: Anas
    Date:   22-11-2024
    Time:   12:08:45
    File:   B_Buying_Lemonade.cpp
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
        ll n,k;
        cin>>n>>k;
        // ll ans=0,sum=0;
        vector<ll>v(n);
        for(auto &x:v)cin>>x;

        sort(v.begin(),v.end());

        ll cnt = 0, sum = 0, bad = 0;
        for(int i=0;i<n;i++) {
            ll x = v[i];
            x -= bad;
            bad+=x;
            // cout<<x*(n-i)<<endl;
            sum += (x*(n-i));
            // cout<<sum<<endl;
            if(sum>=k) {
                break;
            }
            cnt++;
        }
        cout<<k+cnt<<endl;

    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
