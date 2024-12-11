/*
    Author: Anas
    Date:   11-12-2024
    Time:   13:23:16
    File:   Discount.cpp
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
        double a,b;
        cin>>a>>b;


        double ans=a-b;
        double total=ans/a;

        total*=100;
        cout<<fixed<<setprecision(6)<<total;

    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
