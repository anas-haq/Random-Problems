/*
    Author: Anas
    Date:   19-11-2024
    Time:   20:48:55
    File:   D_Vlad_and_Division.cpp
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


        ll mx=(1<<31)-1;
        multiset<ll>mst;
        ll ans=0;
        for(auto i:v)
        {
            if(mst.find((i^mx))!=mst.end())
            {
                ans++;
                mst.erase(mst.find((i^mx)));
            }
            else
            {
                mst.insert(i);
            }            
        }
        ans+=(ll)(mst.size());
        cout<<ans<<"\n";

        


    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
