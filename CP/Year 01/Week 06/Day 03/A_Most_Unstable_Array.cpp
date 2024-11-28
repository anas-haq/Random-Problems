/*
    Author: Anas
    Date:   27-11-2024
    Time:   19:11:06
    File:   A_Most_Unstable_Array.cpp
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
        ll n,k;
        cin>>n>>k;

        if(n==1)
        {
            cout<<0<<"\n";
            return;
        }

        if(n==2)
        {
            cout<<k<<"\n";
            return;
        }

        cout<<(2*k)<<'\n';
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
