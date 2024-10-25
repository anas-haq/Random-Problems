/*
    Author: Anas
    Date:   23-10-2024
    Time:   22:44:13
    File:   A_Exciting_Bets.cpp
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
        ll a,b;
        cin>>a>>b;
        // cout<<__gcd(6,12);
        if(a==b)
        {
            cout<<0<<" "<<0<<'\n';
            return;
        }
        ll c=abs(a-b);
        ll x=a%c;
        ll y=b%c;
        if(x!=y)
        {
            cout<<__gcd(x,y)<<" "<<0<<"\n";
            return;
        }
        ll k=min(x,abs(c-x));
        cout<<c<<" "<<k<<"\n";
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
