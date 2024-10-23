/*
    Author: Anas
    Date:   23-10-2024
    Time:   21:04:25
    File:   Not_too_far_Replacement.cpp
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
        ll n,sum=0;
        cin>>n;
        n++;
        vector<ll>v(n);
        for (ll i = 0; i <n; i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        vector<ll>a(n),b(n);
        b=v;
        sort(b.begin(),b.end()-1);
        // for(auto i:b)cout<<i<<" ";
        ll j=0;
        for(ll i=0;i<n-1;i++)
        {
            a[j]=b[i];
            j++;
        }
        ll ans=v[n-1];
        // for(auto i:a)cout<<i<<" ";
        for (ll i = 0; i <n-1; i++)
        {
            if(a[i]<=(ans*2) && a[i]>ans) 
            {
                // swap(a[i],a[n-1]);
                ans=a[i];
            }
        }
        // for(auto i:a)cout<<i<<" ";
        sum-=ans;
        cout<<sum<<"\n";
        
        

        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
