/*
    Author: Anas
    Date:   19-11-2024
    Time:   00:59:00
    File:   A_Mahmoud_and_Ehab_and_the_even_odd_game.cpp
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
        ll n;
        cin>>n;

        if(n&1)
        {
            cout<<"Ehab\n";
        }
        else
        {
            cout<<"Mahmoud\n";
        }
        

    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
