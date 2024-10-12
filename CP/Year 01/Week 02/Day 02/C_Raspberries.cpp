/*
    Author: Anas
    Date:   12-10-2024
    Time:   21:18:23
    File:   C_Raspberries.cpp
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
        ll n,k;
        cin>>n>>k;
        vector<ll>v(n);
        for (ll i = 0; i <n; i++)
        {
            cin>>v[i];
        }

        ll ans=1e18,x=0;
        for (ll i = 0; i <n; i++)
        {
            if(v[i]%k==0)
            {
                ans=0;
                break;
            }
            else
            {
                ll j=v[i]%k;
                ans=min(ans,k-j);
            }  
            if(v[i]%2==0)          
            {
                x++;
            }
        }
        if(k==4)
        {
            ll y;
            if(x>1)
            {
                y=0;
            }
            else if(x==1)
            {
                y=1;
            }
            else
            {
                y=2;
            }
            ans=min(y,ans);
        }
        cout<<ans<<"\n";
        
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
