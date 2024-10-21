/*
    Author: Anas
    Date:   21-10-2024
    Time:   17:43:21
    File:   A_Serval_and_Mocha_s_Array.cpp
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
        vector<ll>v(n);
        for (ll i = 0; i <n; i++)
        {
            cin>>v[i];            
        }
        for(ll i=0;i<n;i++)
        {
            for(ll j=i+1;j<n;j++)
            {
                if(__gcd(v[i],v[j])<=2)
                {
                    cout<<"YES\n";
                    return;
                }
            }
        }
        cout<<"NO"<<"\n";
        

    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
