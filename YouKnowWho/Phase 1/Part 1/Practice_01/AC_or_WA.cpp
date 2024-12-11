/*
    Author: Anas
    Date:   11-12-2024
    Time:   13:34:56
    File:   AC_or_WA.cpp
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
            cout<<"Yes";
        }
        else 
        {
            cout<<"No";
        }
        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
