/*
    Author: Anas
    Date:   16-10-2024
    Time:   00:58:12
    File:   B_Forming_Triangles.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll tc=1;
    cin >> tc;

    auto Anas = [&]() {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(auto &x:v)cin>>x;
        map<ll,ll>mp;
        for(ll i=0;i<n;i++)
        {
            mp[v[i]]++;
        }
        auto nc2=[&](ll a)
        {
            return (((a*(a-1))/2));
        };
        auto nc3=[&](ll b)
        {
            return ((b*(b-1)*(b-2))/6);
        };
        ll ans=0,sum=0;
        for(auto [x,y]:mp)
        {
            if(y>=3)
            {
                ans+=nc3(y);
            }
            if(y>=2)
            {
                ans+=nc2(y)*sum;
                // cout<<y<< " " <<nc2(y)<<" "<<sum;
            }
            sum+=y;
        }
        cout<<ans<<"\n";
    };

    while (tc--) {
        Anas();
    }
    
    return 0;
}