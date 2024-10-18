/*
    Author: Anas
    Date:   18-10-2024
    Time:   23:16:32
    File:   A_Young_Physicist.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t=1;
    // cin >> t;

    auto Anas = [&]() {
        ll n,ans=0;
        cin>>n;
        ll ans1=0,ans2=0;
        for(ll i=0;i<n;i++)
        {
            ll a,b,c;
            cin>>a>>b>>c;
            ans+=a;
            ans1+=b;
            ans2+=c;
        }
        if(ans==0 && ans1==0 && ans2==0)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
