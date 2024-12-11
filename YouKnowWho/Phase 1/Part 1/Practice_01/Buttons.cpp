/*
    Author: Anas
    Date:   10-12-2024
    Time:   22:44:36
    File:   Buttons.cpp
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
        ll a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<a+b;
            return;
        }

        ll mx=max(a,b);

        cout<<mx+(mx-1);
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
