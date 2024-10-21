/*
    Author: Anas
    Date:   21-10-2024
    Time:   22:54:51
    File:   A_Array_Coloring.cpp
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
        ll odd=0,even=0;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]&1)
            {
                odd++;
            }
            else 
            {
                even++;
            }
        }

        if(odd&1)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
