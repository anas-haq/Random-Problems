/*
    Author: Anas
    Date:   23-11-2024
    Time:   20:52:07
    File:   A_Shohag_Loves_Mod.cpp
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
        ll n;
        cin>>n;
        ll p=1;
        for (ll i = 1; i <=100; i+=2)
        {
            cout<<i<<" ";
            p++;
            if(p==n)
            {
                break;
            }
        }
        cout<<"\n";
        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
