/*
    Author: Anas
    Date:   20-12-2024
    Time:   17:31:45
    File:   A_Add.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test = 1;
    // cin >> test;
    auto totalSum =[&](int a, int b){
        return a+b;
    };
    auto Anas = [&]() {
        int a, b; cin >> a >> b;
        int sum = totalSum(a, b);
        cout<< sum;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
