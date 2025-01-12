/*
    Author: Anas
    Date:   12-01-2025
    Time:   19:14:44
    File:   Sum_of_Divisors.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 1e7+9;

vector<int> v(N);
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;
    for(int i = 1; i < N; i++){
        for(int j = i; j < N; j+=i ){
            v[j]++;
        }
    }
    auto Anas = [&]() {
        int n; cin >> n;
        ll ans = 0;
        for(ll i = 1; i <= n; i++){
            ll x = i*v[i];
            ans += x;
        }
        cout << ans;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
