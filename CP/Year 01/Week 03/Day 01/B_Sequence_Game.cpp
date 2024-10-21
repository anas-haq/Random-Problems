/*
    Author: Anas
    Date:   22-10-2024
    Time:   00:26:20
    File:   B_Sequence_Game.cpp
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
        ll n;
        cin>>n;
        vector<ll>a(n),b;
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        b.push_back(a[0]);
        for (ll i = 1; i <n; i++)
        {
            if(a[i]<b.back());
            {
                b.push_back(a[i]);
            }
            b.push_back(a[i]);
        }
        cout<<(ll)(b.size())<<"\n";
        for(auto x:b)cout<<x<<" ";
        cout<<"\n";
        
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
