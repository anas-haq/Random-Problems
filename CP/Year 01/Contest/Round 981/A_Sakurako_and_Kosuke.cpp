/*
    Author: Anas
    Date:   24-10-2024
    Time:   20:40:43
    File:   A_Sakurako_and_Kosuke.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll tc=1;
    cin >> tc;

    auto Anas = [&]() {
        ll n;
        cin>>n;
        if(n&1)
        {
            cout<<"Kosuke\n";
            return;
            // continue;
        }
        cout<<"Sakurako\n";
    };

    while (tc--) {
        Anas();
    }
    
    return 0;
}
