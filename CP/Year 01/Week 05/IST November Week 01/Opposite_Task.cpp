/*
    Author: Anas
    Date:   12-11-2024
    Time:   21:31:15
    File:   Opposite_Task.cpp
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
        if(n>10)
        {
            cout<<abs(10-n)<<" "<<10<<"\n";
            return;
        }
        cout<<"0 "<<n<<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
