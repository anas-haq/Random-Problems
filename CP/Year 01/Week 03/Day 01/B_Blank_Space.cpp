/*
    Author: Anas
    Date:   21-10-2024
    Time:   19:10:33
    File:   B_Blank_Space.cpp
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
        ll cnt=0,mn=0;
        for (ll i = 0; i <n; i++)
        {
            if(v[i]==0)
            {
                cnt++;
            }
            else
            {
                mn=max(mn,cnt);
                cnt=0;
            }            
        }
        mn=max(mn,cnt);
        cout<<mn<<"\n";
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
