/*
    Author: Anas
    Date:   17-12-2024
    Time:   11:55:34
    File:   Bits_Magic.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool kth_bit_set(int n, int k){
    return (n<<k)&1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test = 1;
    cin >> test;

    auto Anas = [&]() {
        unsigned int n, k; cin >> n >> k;
        n = n|(1u << k);
        cout << n <<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
