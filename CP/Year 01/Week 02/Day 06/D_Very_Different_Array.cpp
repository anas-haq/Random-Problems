/*
    Author: Anas
    Date:   19-10-2024
    Time:   00:52:05
    File:   D_Very_Different_Array.cpp
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

        vector<ll>a(n),b(m);
        deque<ll>da,db;

        for (ll i = 0; i <n; i++)
        {
            cin>>a[i];
        }
        for (ll i = 0; i <m; i++)
        {
            cin>>b[i];
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        
        for (ll i = 0; i <n; i++)
        {
            da.push_back(a[i]);
        }
        for (ll i = 0; i <m; i++)
        {
            db.push_back(b[i]);
        }

        ll ans=0;

        for (ll i = 0; i <n; i++)
        {
            ll af=da.front();
            ll ab=da.back();
            ll bf=db.front();
            ll bb=db.back();
            ll diff1=abs(af-bb);
            ll diff2=abs(ab-bf);
            if(diff1>diff2)
            {
                ans+=diff1;
                da.pop_front();
                db.pop_back();
            }
            else
            {
                ans+=diff2;
                da.pop_back();
                db.pop_front();
            }            
        }

        cout<<ans<<"\n";
        
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
