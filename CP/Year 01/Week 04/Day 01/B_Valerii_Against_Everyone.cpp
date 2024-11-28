/*
    Author: Anas
    Date:   31-10-2024
    Time:   01:05:23
    File:   B_Valerii_Against_Everyone.cpp
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
        set<ll>s;
        for (ll i = 0; i <n; i++)
        {
            ll x;
            cin>>x;
            s.insert(x);
        }
        cout<<((s.size()!=n)?"YES":"NO")<<"\n";
        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
