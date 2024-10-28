/*
    Author: Anas
    Date:   28-10-2024
    Time:   11:53:21
    File:   A_AvtoBus.cpp
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
        if(n<4 || n&1)
        {
            cout<<"-1\n";
            return;
        }
        ll a=n/6,b=n/4;
        if(n%6!=0)
        {
            a++;
        }
        cout<<a<<" "<<b<<"\n";
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
