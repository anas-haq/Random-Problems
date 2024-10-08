/*
    Author: Anas
    Date:   04-10-2024
    Time:   17:57:03
    File:   C_Bitwise_Balancing.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t=1;
    cin >> t;
    
    map<tuple<ll,ll,ll>,ll>mp;
    mp[{0,0,0}]=0;
    mp[{0,0,1}]=1;
    mp[{0,1,0}]=0;
    mp[{0,1,1}]=-1;
    mp[{1,0,0}]=-1;
    mp[{1,0,1}]=0;
    mp[{1,1,0}]=1;
    mp[{1,1,1}]=0;

    auto Anas = [&]() {
        ll b,c,d,a=0;
        cin>>b>>c>>d;
        for(ll i=60;i>=0;i--)
        {
            ll I = (((1ll << i) & b) != 0);
            ll J = (((1ll << i) & c) != 0); 
            ll K = (((1ll << i) & d) != 0);
            ll X=mp[{I,J,K}];
            if(X==-1)
            {
                cout<<"-1"<<"\n";
                return;
            }
            else
            {
                a+=X*(1LL<<i);
            }            
        }
        cout<<a<<"\n";

    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
