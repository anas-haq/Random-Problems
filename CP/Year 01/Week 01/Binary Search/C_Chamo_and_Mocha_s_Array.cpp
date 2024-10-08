/*
    Author: Anas
    Date:   08-10-2024
    Time:   01:23:13
    File:   C_Chamo_and_Mocha_s_Array.cpp
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
        if(n<3)
        {
            cout<<min(v[0],v[1])<<"\n";
            return;
        }
        ll mx=0;
        for (ll i = 0; i <n-2; i++)
        {
            vector<ll>k;
            k.push_back(v[i]);
            k.push_back(v[i+1]);
            k.push_back(v[i+2]);
            sort(k.begin(),k.end());
            mx=max(mx,k[1]);
        }
        cout<<mx<<"\n";
        

    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
