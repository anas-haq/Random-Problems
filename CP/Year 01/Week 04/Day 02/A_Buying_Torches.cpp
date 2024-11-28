/*
    Author: Anas
    Date:   31-10-2024
    Time:   16:45:28
    File:   A_Buying_Torches.cpp
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
        ll x,y,k;
        cin>>x>>y>>k;
        ll need=(y*k)+(k-1);
        ll ans=(need/(x-1));
        ans+=k;
        if(need%(x-1))
        {
            ans++;
        }
        cout<<ans<<"\n";;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
