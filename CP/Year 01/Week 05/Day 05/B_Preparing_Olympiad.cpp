/*
    Author: Anas
    Date:   17-11-2024
    Time:   00:09:42
    File:   B_Preparing_Olympiad.cpp
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
        ll n,l,r,x;
        cin>>n>>l>>r>>x;
        vector<ll>v(n);
        for(auto &x:v)cin>>x;

        ll cnt=0,sum=0;
        ll i=0,j=0;
        while (i<n-1)
        {
            sum+=v[j];
            if(sum>=l && sum<=r)
            {
                cnt++;

            }
        }
        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
