/*
    Author: Anas
    Date:   28-01-2025
    Time:   19:15:57
    File:   Permutation_Value.cpp
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
        cout << 1 <<" " << n <<" ";
        for(int i = n-1; i >= 2; i--){
            cout << i <<" \n"[i==2];
        }
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
