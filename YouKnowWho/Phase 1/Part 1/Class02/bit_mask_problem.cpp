/*
    Author: Anas
    Date:   13-12-2024
    Time:   12:10:57
    File:   bit_mask_problem.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test=1;
    // cin >> test;

    auto Anas = [&]() {
        ll n,s;
        cin>>n>>s;
        vector<ll>v(n);
        for(auto &x:v)cin>>x;

        for(ll mask=0;mask<(1<<n);mask++)
        {
            ll sum=0;
            for(ll i=0;i<n;i++)
            {
                if((mask>>i)&1)
                {
                    sum+=v[i];
                }
            }
            if(sum==s)
            {
                cout<<"YES";
                return;
            }
        }

        cout<<"NO";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
