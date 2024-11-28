/*
    Author: Anas
    Date:   27-11-2024
    Time:   20:46:57
    File:   Adjacent_Sum_Array.cpp
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
        ll m=n-1;
        vector<ll>a,b(m);
        for(ll i=0;i<m;i++)
        {
            cin>>b[i];
        }

        sort(b.begin(),b.end());
        a.push_back(1);
        for(ll i=0;i<m;i++)
        {
            ll ans=abs(a.back()-b[i]);
            a.push_back(ans);
        }
        for(auto i:a)cout<<i<<" ";
        cout<<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
