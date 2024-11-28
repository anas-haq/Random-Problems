/*
    Author: Anas
    Date:   16-11-2024
    Time:   02:29:40
    File:   ps01.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test=1;
    cin >> test;

    auto Anas = [&]() {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(auto &x:v)cin>>x;

        auto bs=[&](ll mid)
        {
            return v[0]>v[mid];
        };

        ll l=0,h=n-1,mid,ans=0;
        
        while (l<=h)
        {
            mid=(l+h)>>1;
            if(bs(mid))
            {
                ans=mid;
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        cout<<ans<<"\n";
        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
