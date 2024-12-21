/*
    Author: Anas
    Date:   20-12-2024
    Time:   17:53:01
    File:   F_Equation.cpp
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
        int x, n; cin >> x >> n;
        ll sum = 0;
        // ll ans = pow(5,2);
        // cout << ans;
        for(int i = 2; i <=n; i+=2){
            double ans = pow(x, i);
            // cout << ans <<" ";
            sum+=ans;
            // cout<< sum <<" ";
        }
        cout << sum;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
