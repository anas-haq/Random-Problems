/*
    Author: Anas
    Date:   25-10-2024
    Time:   23:07:03
    File:   B_Make_It_Increasing.cpp
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
        for(auto &x:v)cin>>x;
        ll cnt=0;
        for (ll i = n-2; i>=0; i--)
        {
            while (v[i]>=v[i+1] && v[i]>0)
            {
                v[i]=v[i]/2;
                cnt++;
            }            
            if(v[i]==v[i+1])
            {
               cout<<"-1\n";
               return;
            }
        }
        cout<<cnt<<"\n";
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
