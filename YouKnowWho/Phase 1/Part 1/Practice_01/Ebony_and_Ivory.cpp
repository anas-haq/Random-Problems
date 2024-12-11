/*
    Author: Anas
    Date:   10-12-2024
    Time:   23:19:00
    File:   Ebony_and_Ivory.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test=1;
    // cin >> test;

    auto Anas = [&]() {
        ll a,b,c;
        cin>>a>>b>>c;

        for(ll i=0;i<=c;i+=a)
        {
            for(ll j=0;j<=c;j+=b)
            {
                ll x=i+j;
                if(x==c)
                {
                    cout<<"Yes";
                    return;
                }
            }
        }

        cout<<"No";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
