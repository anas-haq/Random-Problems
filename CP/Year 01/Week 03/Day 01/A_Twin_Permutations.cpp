/*
    Author: Anas
    Date:   21-10-2024
    Time:   21:24:28
    File:   A_Twin_Permutations.cpp
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
        for (ll i = 0; i <n;i++)
        {
            cout<<n-v[i]+1<<" ";
        }
        cout<<"\n";
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
