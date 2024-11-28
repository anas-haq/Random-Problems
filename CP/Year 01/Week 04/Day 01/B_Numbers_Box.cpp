/*
    Author: Anas
    Date:   31-10-2024
    Time:   02:13:24
    File:   B_Numbers_Box.cpp
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
        ll n,m;
        cin>>n>>m;

        ll ar[n][m];
        ll sum=0,cnt=0,mn=LLONG_MAX;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                cin>>ar[i][j];
                if(ar[i][j]<0)
                {
                    cnt++;
                }
                sum+=abs(ar[i][j]);
                mn=min(mn,abs(ar[i][j]));
            }
        }
        if(cnt&1)
        {
            sum-=mn;
            sum-=mn;
            cout<<sum<<"\n";
            return;
        }
        cout<<sum<<"\n";        

    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
