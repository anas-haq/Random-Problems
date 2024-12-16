/*
    Author: Anas
    Date:   16-12-2024
    Time:   13:15:19
    File:   Pyramid.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test = 1;
    // cin >> test;

    auto Anas = [&]() {
        int n; cin >> n;
        for( int i = 1; i <= n; i++){
            // int cnt = 0;
            for (int j = 0; j < i; j++){
                cout<<"*";
            }
            cout<<'\n';
        }
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
