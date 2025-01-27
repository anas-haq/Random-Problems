/*
    Author: Anas
    Date:   25-01-2025
    Time:   13:19:51
    File:   Range_Xor_Queries.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;

    auto Anas = [&]() {
        int n, q; cin >> n >> q;
        vector<int>v(n+1),prefix_xor(n+2);
        for(int i = 1; i <= n; i++){
            cin >> v[i];
        }
        prefix_xor[0] = 0;
        for(int i = 1; i <= n; i++){
            prefix_xor[i] = prefix_xor[i-1]^v[i];
        }
        while(q--){
            int l,r; cin >> l >> r;
            cout << (prefix_xor[r]^prefix_xor[l-1]) <<"\n";
        }
        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
