/*
    Author: Anas
    Date:   26-12-2024
    Time:   23:02:58
    File:   Project_Euler_6_Sum_square_difference.cpp
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
        int n; cin >> n;
        ll sum1 = (n*(n+1))>>1;
        sum1 *= sum1;
        ll sum2 = (n*(n+1)*((2*n)+1))/6LL;
        ll ans = sum1 - sum2;
        cout << ans <<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
