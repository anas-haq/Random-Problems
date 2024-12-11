/*
    Author: Anas
    Date:   11-12-2024
    Time:   10:23:42
    File:   How_many.cpp
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
        ll a,t;
        cin>>a>>t;

        ll cnt=0;


        for (ll i = 0; i <=a; i++)
        {
            for(ll j=0;j<=a;j++)
            {
                for(ll k=0;k<=a;k++)
                {
                    if(i+j+k<=a and i*j*k<=t)
                    {
                        cnt++;
                    }
                    // else break;                    
                    
                }
            }
        }

        cout<<cnt;
        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
