/*
    Author: Anas
    Date:   08-10-2024
    Time:   12:52:21
    File:   G_Robot_Walk.cpp
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t = 1; 

    auto Anas = [&]() {
        ll n, x; 
        cin >> n >> x;

        string s1, s2; 
        ll k; 
        cin >> s1 >> k >> s2;

        string s; 
        x--;
        // for (ll i = 0; i < x; i++) {
            s += s1[x];
        // }

        ll o = x; 

        for (ll i = 0; i < k; i++) {
            if (s2[i] == 'R') { 
                
                o++; 
            } else { 
               o--;
            }
            s+=s1[o];
        }
        cout << s; 
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
