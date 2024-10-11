/*
    Author: Anas
    Date:   11-10-2024
    Time:   19:10:42
    File:   D_Three_Activities.cpp
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
        vector<ll>a(n),b(n),c(n);
        vector<pair<ll,ll>>v1,v2,v3;
        for (ll i = 0; i <n; i++)
        {
            cin>>a[i];
            v1.push_back({a[i],i});
        }
        for (ll i = 0; i <n; i++)
        {
            cin>>b[i];
            v2.push_back({b[i],i});
        }
        for (ll i = 0; i <n; i++)
        {
            cin>>c[i];
            v3.push_back({c[i],i});
        }
        auto cmp=[&](pair<ll,ll>a,pair<ll,ll>b)
        {
            return a.first>b.first;
        };
        sort(v1.begin(),v1.end(),cmp);
        sort(v2.begin(),v2.end(),cmp);
        sort(v3.begin(),v3.end(),cmp);

        ll hudai=0,ans=0;
        for (ll i = 0; i <3; i++)
        {
            for(ll j=0;j<3;j++)
            {
                for(ll k=0;k<3;k++)
                {
                    if((v1[i].second!=v2[j].second)&&(v1[i].second!=v3[k].second) &&(v2[j].second!=v3[k].second))
                    {
                        ll sum=v1[i].first+v2[j].first+v3[k].first;
                        ans=max(ans,sum);
                    }
                }
            }
        }

        cout<<ans<<"\n";
        
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
