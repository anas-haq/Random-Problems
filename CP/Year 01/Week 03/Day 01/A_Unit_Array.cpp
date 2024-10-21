/*
    Author: Anas
    Date:   21-10-2024
    Time:   19:33:00
    File:   A_Unit_Array.cpp
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
        ll odd=0,even=0,sum=0;
        for (ll i = 0; i <n; i++)
        {
            cin>>v[i];
            if(v[i]>0)
            {
                even++;
            }
            else
            {
                odd++;
            }            
        }
        while (odd>even)
        {
            sum++;
            even++;
            odd--;
        }
        if(odd&1)
        {
            sum++;
        }
        cout<<sum<<"\n";
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
