/*
    Author: Anas
    Date:   26-11-2024
    Time:   23:22:54
    File:   B_Mahmoud_and_a_Triangle.cpp
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
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(auto &x:v)cin>>x;

        sort(v.begin(),v.end());
        bool ok=false;
        for(ll i=0;i<n-2;i++)
        {
            if(v[i]+v[i+1]>v[i+2])
            {
                ok=true;
                break;
            }
        }
        if(ok)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
