/*
    Author: Anas
    Date:   28-11-2024
    Time:   18:04:39
    File:   B_GCD_Compression.cpp
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
        ll n,k;
        cin>>n;
        k=n<<1;
        vector<ll>v(k);
        for(auto &x:v)cin>>x;
        vector<ll>even,odd;

        for(ll i=0;i<k;i++)
        {
            ll ans=i+1;
            if(v[i]&1)
            {
                odd.push_back(ans);
            }
            else
            {
                even.push_back(ans);
            }            
        }
        // for(auto i:odd)cout<<i<<" ";
        ll o=odd.size();
        if(o&1)
        {
            odd.pop_back();
            even.pop_back();
        }
        ll cnt=0,sum=0;
        for(auto i:odd)
        {
            cout<<i<<" ";
            cnt++;
            if(cnt==2)
            {
                sum++;                
                cout<<"\n";
                cnt=0;
                if(sum==n-1)
                {
                    // break;
                    return;
                }
            }
            
        }
        cnt=0;        
        for(auto i:even)
        {
            cout<<i<<" ";
            cnt++;
            if(cnt==2)
            {
                sum++;                
                cout<<"\n";
                cnt=0;
                if(sum==n-1)
                {
                    // break;
                    return;
                }
            }            
        }      
        
        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
