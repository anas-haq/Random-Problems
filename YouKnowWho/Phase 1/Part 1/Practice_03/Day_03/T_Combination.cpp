/*
    Author: Anas
    Date:   23-12-2024
    Time:   00:46:28
    File:   T_Combination.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll combination(int n, int r){
    if(n < r or r < 0 or n < 0){
        return 0;
    }
    if(n == 0){
        return 1;
    }
    return combination(n-1,r) + combination(n-1, r-1);
} 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;

    auto Anas = [&]() {
        int n, r; cin >> n >> r;
        cout << combination(n,r);
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
