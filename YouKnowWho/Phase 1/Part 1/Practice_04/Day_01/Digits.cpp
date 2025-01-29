/*
    Author: Anas
    Date:   27-01-2025
    Time:   21:52:57
    File:   Digits.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;

    auto Anas = [&]() {
        int n,k; cin >> n >> k;
        int ans = log10(n)/log10(k);
        // if(k == 2){
        //     ans = log2(n) + 1;
        // }
        ans++;
        cout << ans;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
