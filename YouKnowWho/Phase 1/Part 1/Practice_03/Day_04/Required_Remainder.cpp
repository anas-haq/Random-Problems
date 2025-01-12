/*
    Author: Anas
    Date:   28-12-2024
    Time:   23:26:37
    File:   Required_Remainder.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    cin >> test;

    auto Anas = [&]() {
        int x,y,n; cin >> x >> y >> n;
        int k = n;
        while (true)
        {
            if(k%x == y){
                cout << k <<"\n";
                return;
            }
            k--;            
        }
        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
