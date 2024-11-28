/*
    Author: Anas
    Date:   26-11-2024
    Time:   10:58:29
    File:   B_Special_Numbers.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll mod=1e9+7;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test=1;
    cin >> test;

    auto Anas = [&]() {
        ll n,k;
        cin>>n>>k;
        ll x=1,ans=0;
        while (k)
        {
            if(k&1)
            {
                ans+=x;
                ans%=mod;
            }
            k>>=1;
            x*=n;
            x%=mod;
        }
        cout<<ans<<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
