/*
    Author: Anas
    Date:   28-01-2025
    Time:   18:30:59
    File:   XORinacci.cpp
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
        int a, b, n; cin >> a >> b >> n;
        if(n%3 == 0){
            cout << a <<"\n";
            return;
        }
        if(n%3 == 1){
            cout << b <<"\n";
            return;
        }
        int ans = a ^ b;
        cout << ans <<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
