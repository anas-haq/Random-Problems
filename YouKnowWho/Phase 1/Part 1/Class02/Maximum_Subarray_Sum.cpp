/*
    Author: Anas
    Date:   13-12-2024
    Time:   12:05:01
    File:   Maximum_Subarray_Sum.cpp
*/

// https://cses.fi/problemset/result/11413085/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test=1;
    // cin >> test;

    auto Anas = [&]() {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(auto &x:v)cin>>x;

        ll sum=-1e18;
        ll subarray_sum=-1e18;
        for(ll i=0;i<n;i++)
        {
            subarray_sum=max(v[i],v[i]+subarray_sum);
            sum=max(sum,subarray_sum);
        }

        cout<<sum<<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
