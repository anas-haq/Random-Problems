/*
    Author: Anas
    Date:   26-11-2024
    Time:   19:46:01
    File:   C_Sofia_and_the_Lost_Operations.cpp
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
        vector<ll>a(n),b(n);
        map<ll,ll>cnt1,cnt2;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(ll i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                cnt1[b[i]]++;
            }
        }

        ll m;
        cin>>m;
        vector<ll>d(m);
        for(ll i=0;i<m;i++)
        {
            cin>>d[i];
            cnt2[d[i]]++;
        }

        bool ok=true;

        for(auto [x,y]:cnt1)
        {
            if(cnt2[x]<y)
            {
                ok=false;
                break;
            }
        }
        if(!ok)
        {
            cout<<"NO\n";
            return;
        }

        ll cnt=count(b.begin(),b.end(),d[m-1]);
        if(cnt==0)
        {
            cout<<"NO\n";
            return;
        }
        // else
        // {
            cout<<"YES\n";
        // }
        
        



        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
