/*
    Author: Anas
    Date:   27-11-2024
    Time:   20:32:26
    File:   Assignment_Score.cpp
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
        ll lagbe=(n+1)*100;
        lagbe=lagbe>>1;
        ll sum=0;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        ll need=(lagbe-sum);
        if(need>100)
        {
            cout<<"-1\n";
        }
        else if(need<=0)
        {
            cout<<0<<"\n";
        }
        else
        {
            cout<<need<<"\n";
        }
        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
