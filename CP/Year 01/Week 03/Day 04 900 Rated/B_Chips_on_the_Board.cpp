/*
    Author: Anas
    Date:   28-10-2024
    Time:   12:30:35
    File:   B_Chips_on_the_Board.cpp
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
        vector<ll>a(n),b(n);
        for(auto &x:a)cin>>x;
        for(auto &x:b)cin>>x;

        sort(b.begin(),b.end());
        sort(a.begin(),a.end());
        ll ans=b[0],ans1=a[0];
        ll sum=0,sum1=0;
        for (ll i = 0; i <n; i++)
        {
            sum+=(ans+a[i]);
            sum1+=(ans1+b[i]);
        }
        cout<<min(sum,sum1)<<"\n";
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
