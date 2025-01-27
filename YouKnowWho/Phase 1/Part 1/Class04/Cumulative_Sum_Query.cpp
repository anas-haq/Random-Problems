/*
    Author: Anas
    Date:   25-01-2025
    Time:   12:37:04
    File:   Cumulative_Sum_Query.cpp
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
        int n; cin >> n;
        vector<int> v(n+1),prefix(n+2);
        for(int i = 1; i <= n; i++){
            cin >> v[i];
        }
        prefix[0]=0;
        for(int i = 1; i <= n; i++){
            prefix[i]= prefix[i-1] + v[i];
        }
        int q; cin >> q;
        while(q--){
            int l, r; cin >> l >> r;
            l++, r++;
            ll sum = prefix[r] - prefix[l-1];
            cout << sum <<"\n";
        }
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
