/*
    Author: Anas
    Date:   19-11-2024
    Time:   00:30:57
    File:   A_LCM_Problem.cpp
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
        ll l,r;
        cin>>l>>r;
        // auto lcm=[&](ll x,ll y)
        // {
        //     return (x/__gcd(x,y))*y;
        // };
        // ll ans=lcm(l,r);
        ll ans=l<<1;
        // cout<<ans<<"\n";
        if(ans<=r)
        {
            // ll x=(l<<1);
            cout<<l<<" "<<ans<<"\n";
        }
        else
        {
            cout<<"-1"<<" "<<"-1"<<"\n";
        }
        

        // cout<<ans<<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
