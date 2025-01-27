/*
    Author: Anas
    Date:   26-01-2025
    Time:   13:48:04
    File:   A_Special_Permutation.cpp
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
        cout << n <<" ";
        for(int i = 1; i < n; i++){
            cout << i <<" ";
        }
        cout <<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
