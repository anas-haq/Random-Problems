/*
    Author: Anas
    Date:   11-12-2024
    Time:   17:03:40
    File:   Tricky_Sum.cpp
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

        ll total=0;
        ll sum=0;
        for(ll i=0;i<=n;i++)
        {
            ll x=1<<i;
            if(x<=n)
            {
                total+=x;
            }
            else
            {
                break;
            }            
        }
        sum=(n*(n+1))>>1;
        // cout<<sum;
        sum-=total;
        sum-=total;


        cout<<sum<<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
