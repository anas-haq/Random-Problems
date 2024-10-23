/*
    Author: Anas
    Date:   23-10-2024
    Time:   20:32:42
    File:   Non_matching_Name.cpp
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
        ll n,m;
        cin>>n>>m;
        string s1,s2;
        cin>>s1>>s2;
        vector<ll>v(26,0);
        for (ll i = 0; i <n; i++)
        {
            ll a=s1[i]-'a';
            v[a]++;

        }
        for (ll i = 0; i <m; i++)
        {
            ll a=s2[i]-'a';
            v[a]++;

        }
        for (ll i = 0; i <v.size(); i++)
        {
            if(v[i]==0)
            {
                cout<<"Yes\n";
                return;
            }

        }
        cout<<"No\n";
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
