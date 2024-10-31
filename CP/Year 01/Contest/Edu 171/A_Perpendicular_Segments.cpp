/*
    Author: Anas
    Date:   31-10-2024
    Time:   20:49:28
    File:   A_Perpendicular_Segments.cpp
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
        ll mn=min(x,y);
        cout<<0<<" "<<0<<" "<<mn<<" "<<mn<<"\n"
        <<0<<" "<<mn<<" "<<mn<<" "<<0<<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
