/*
    Author: Anas
    Date:   31-10-2024
    Time:   22:34:15
    File:   C_Double_ended_Strings.cpp
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
        string a,b;cin>>a>>b;
        if(a==b)
        {
            cout<<"0\n";
            return;
        }
        ll n=a.size(),m=b.size();
        ll len=0;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                ll x=i,y=j;
                ll cnt=0;
                while (x<n && y<m && a[x]==b[y])
                {
                    x++;
                    y++;
                    cnt++;
                }
                len=max(cnt,cnt);
                
            }
        }
        cout<<(n+m)-(2*len)<<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
