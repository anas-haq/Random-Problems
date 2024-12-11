/*
    Author: Anas
    Date:   11-12-2024
    Time:   13:21:22
    File:   Square_Inequality.cpp
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
        ll a,b,c;
        cin>>a>>b>>c;
        a*=a;
        b*=b;
        c*=c;
        ll ans=a+b;
        if(ans<c)
        {
            cout<<"Yes";
            return;
        }

        cout<<"No";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
