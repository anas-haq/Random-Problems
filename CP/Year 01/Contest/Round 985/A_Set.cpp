/*
    Author: Anas
    Date:   13-11-2024
    Time:   10:33:20
    File:   A_Set.cpp
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
        ll l,r,k;
        cin>>l>>r>>k;
        r/=k;
        ll ans=max(0LL,r-l+1);
        cout<<ans<<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
