/*
    Author: Anas
    Date:   02-11-2024
    Time:   02:01:05
    File:   B_MEXor_Mixup.cpp
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
        ll a,b;
        cin>>a>>b;
        ll ans=0;
        ans^=2020;
        ans^=2021;
        cout<<ans;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
