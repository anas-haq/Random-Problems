/*
    Author: Anas
    Date:   15-10-2024
    Time:   22:34:35
    File:   B_Bessie_and_MEX.cpp
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
        set<ll>s;
        ll cnt=0;
        for (ll i = 0; i <n; i++)
        {
            if(v[i]<0)
            {
                ll ans=cnt+abs(v[i]);
                cout<<ans<<" ";
                s.insert(ans);
            }
            else
            {
                cout<<cnt<<" ";
                s.insert(cnt);
                cnt++;                
                while(s.count(cnt))
                {
                    cnt++;
                }
            }            
        }
        cout<<"\n";
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
