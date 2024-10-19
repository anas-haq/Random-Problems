/*
    Author: Anas
    Date:   16-10-2024
    Time:   20:38:24
    File:   Long_Queue.cpp
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
        ll p=n,k=v[n-1]/2;
        for (ll i =n-2; i>=0; i--)
        {
            if(v[i]<=k)                        
            {
                p--;
                // break;
            }
            else{
                break;
            }
        }
        cout<<p<<"\n";
        

    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
