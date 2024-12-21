/*
    Author: Anas
    Date:   21-12-2024
    Time:   00:09:51
    File:   J_Factorial.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll fun(int n){
    if(n == 1){
        return 1;
    }
    ll ans = fun(n-1);
    return ans*n;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;

    auto Anas = [&]() {
        int n; cin >> n;
        ll ans = fun(n);
        cout<< ans;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
