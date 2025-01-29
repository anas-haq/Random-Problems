/*
    Author: Anas
    Date:   29-01-2025
    Time:   00:59:34
    File:   Odd_Pairs.cpp
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
        ll odd_count = (n+1)/2;
        ll even_count = n/2;
        cout << (2*odd_count*even_count) <<'\n';
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
