/*
    Author: Anas
    Date:   27-01-2025
    Time:   19:48:54
    File:   Onotole_needs_your_help.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    cin >> test;
    int ans = 0;
    auto Anas = [&]() {
        int n; cin >> n;
        ans^=n;
        // cout << ans <<" ";
    };
    
    while (test--) {
        Anas();
    }
    cout << ans;

    
    return 0;
}
