/*
    Author: Anas
    Date:   08-10-2024
    Time:   20:10:19
    File:   ICPC_Standing.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t=1;
    cin >> t;

    ll a=1;
    auto Anas = [&]() {
        ll x,y,z;
        cin>>x>>y>>z;
        if(y==x && z!=1)
        {
            cout<<"No";
        }
        else
        {
            cout<<"Yes";
        }        
    };

    while (t--) {
        cout<<"Case "<<a<<": ";
        Anas();
        cout<<"\n";
        a++;
    }
    
    return 0;
}
