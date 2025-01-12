/*
    Author: Anas
    Date:   09-01-2025
    Time:   19:45:40
    File:   Harmonic_series.cpp
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
        int n; cin >> n;
        double ans = 1;
        if(n == 1){
            cout << fixed << setprecision(4) << ans;
            return;
        }
        for (int i = 2; i <=n; i++){
            double x = 1.0/i;
            // cout << x <<" ";
            ans += x;
        }
        cout << fixed << setprecision(4) << ans;
        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
