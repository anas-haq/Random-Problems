/*
    Author: Anas
    Date:   15-12-2024
    Time:   11:28:51
    File:   Permutation_with_arrays.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test=1;
    // cin >> test;

    auto Anas = [&]() {
        int n; cin >> n;
        vector<int>a(n),b(n);
        for(auto &x: a) cin >> x;
        for(auto &x: b) cin >> x;

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        for(int i = 0; i < n; i++){
            if(a[i] != b[i]){
                cout << "no";
                return;
            }
        }

        cout << "yes";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
