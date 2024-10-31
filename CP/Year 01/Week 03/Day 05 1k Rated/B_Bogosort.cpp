/*
    Author: Anas
    Date:   28-10-2024
    Time:   19:07:26
    File:   B_Bogosort.cpp
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
        vector<ll>v(n),a,b,k(n);
        for(auto &x:v)cin>>x;
        sort(v.rbegin(),v.rend());
        // sort(b.begin(),b.end());
        // for ( ll i = 0; i <n; i+=2)
        // {
        //     k[j]=
        // }
        for(auto i:v)cout<<i<<" ";
        cout<<"\n";
        

    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
