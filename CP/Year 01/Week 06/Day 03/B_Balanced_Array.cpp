/*
    Author: Anas
    Date:   27-11-2024
    Time:   17:08:45
    File:   B_Balanced_Array.cpp
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
        if(n%4!=0)
        {
            cout<<"NO\n";
            return;
        }
        cout<<"YES\n";
        ll sum=0,sum1=0;
        for(ll i=2;i<=n;i+=2)
        {
            sum+=i;
            cout<<i<<" ";
        }
        for(ll i=1;i<n-1;i+=2)
        {
            sum1+=i;
            cout<<i<<" ";
        }
        cout<<sum-sum1<<"\n";


    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
