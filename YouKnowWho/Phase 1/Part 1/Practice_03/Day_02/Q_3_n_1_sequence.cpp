/*
    Author: Anas
    Date:   21-12-2024
    Time:   19:38:40
    File:   Q_3_n_1_sequence.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int GetSequence(int n){
    if(n == 1){
        return 1;
    }
    if(n & 1){
        int val = (3*n)+1;
        int ans = GetSequence(val);
        return ++ans;
    }
    else{
        int val = (n>>1);
        int ans = GetSequence(val);
        return ++ans;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;

    auto Anas = [&]() {
        int n; cin >> n;
        int ans = GetSequence(n);
        cout << ans;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
