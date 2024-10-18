/*
    Author: Anas
    Date:   18-10-2024
    Time:   00:14:33
    File:   B_StORage_room.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int MaxValue=(1<<30)-1;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t=1;
    cin >> t;

    auto Anas = [&]() {
        ll n;
        cin>>n;
        vector<vector<ll>>v(n+2,(vector<ll>(n+2)));
        for (ll i = 1; i <=n; i++)
        {
            for(ll j=1;j<=n;j++)
            {
                cin>>v[i][j];
            }
        }

        vector<ll>ans(n+1);
        for(ll i=1;i<=n;i++)
        {
            ll x=1073741823;
            // MaxValue
            for (ll j =1; j <=n; j++)
            {
                if(i!=j)
                {
                    x&=v[i][j];
                }
            }
            ans[i]=x;
        }
        for(ll i=1;i<=n;i++)
        {
            for (ll j =1; j <=n; j++)
            {
                if(i!=j)
                {
                    ll x=ans[i]|ans[j];
                    if(x!=v[i][j])
                    {
                        cout<<"NO\n";
                        return;
                    }
                }
            }
        }
        cout<<"YES\n";
        for (ll i = 1; i <=n; i++)
        {
            cout<<ans[i]<<" ";
        }  

        cout<<"\n";        
    };

    while (t--) {
        Anas();
        // cout<<MaxValue;
    }
    
    return 0;
}
