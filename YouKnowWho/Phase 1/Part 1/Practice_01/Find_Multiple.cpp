/*
    Author: Anas
    Date:   10-12-2024
    Time:   23:05:15
    File:   Find_Multiple.cpp
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

        for(ll i=1;i<1000;i++)
        {
            ll x=i*c;
            if(x>=a and x<=b)
            {
                cout<<x;return;
            }
            if(x>c)
            {
                break;
            }
        }

        cout<<-1;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
