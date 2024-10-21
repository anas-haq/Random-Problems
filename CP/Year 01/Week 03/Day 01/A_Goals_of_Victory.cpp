/*
    Author: Anas
    Date:   22-10-2024
    Time:   00:47:16
    File:   A_Goals_of_Victory.cpp
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
        ll n;
        cin>>n;
        ll sum=0,sum1=0;
        for (ll i = 0; i <n-1; i++)
        {
            ll x;
            cin>>x;
            if(x>0)
            {
                sum+=x;
            }
            else
            {
                sum1+=abs(x);
            }            
        }
        if(sum>sum1)
        {
            cout<<sum1-sum<<"\n";
        }
        else
        {
            cout<<sum1-sum<<"\n";
        }
        

        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
