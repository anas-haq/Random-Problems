/*
    Author: Anas
    Date:   26-01-2025
    Time:   01:15:43
    File:   A_Coins.cpp
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
        int n, sum; cin >> n >> sum;
        int ans = sum/n;
        if(sum%n){
            ans++;
        }
        cout << ans;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
