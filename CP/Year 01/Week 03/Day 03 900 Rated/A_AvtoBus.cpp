/*
    Author: Anas
    Date:   25-10-2024
    Time:   23:50:28
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
        if(n&1 || n<4)
        {
            cout<<"-1\n";
            return;
        }
        if(n%4==0 && n%6!=0)
        {
            cout<<n/4<<" "<<n/4<<"\n";
            return;
        }
        if(n%6==0 && n%4!=0)
        {
            cout<<n/6<<" "<<n/6<<"\n";
            return;
        }
        cout<<n/6<<" "<<n/4<<"\n";
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
