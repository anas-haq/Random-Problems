/*
    Author: Anas
    Date:   19-10-2024
    Time:   20:09:35
    File:   A_A_Gift_From_Orangutan.cpp
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
        ll n,mx=LLONG_MIN,mn=LLONG_MAX;
        cin>>n;
        vector<ll>v(n),a(n),b(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
            mn=min(mn,v[i]);
            mx=max(mx,v[i]);
        }
        b[0]=mx;
        for (ll i = 1; i <n; i++)
        {
            b[i]=mn;
        }
        for (ll i = 0; i <n; i++)
        {
            a[i]=mx;
        }
        ll sum=0;
        for (ll i = 0; i <n; i++)
        {
            sum+=abs(a[i]-b[i]);
        }
        cout<<sum<<'\n';
    };

    while (tc--) {
        Anas();
    }
    
    return 0;
}
