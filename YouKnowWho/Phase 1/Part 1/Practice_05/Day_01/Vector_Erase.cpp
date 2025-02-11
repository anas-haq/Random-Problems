/*
    Author: Anas
    Date:   10-02-2025
    Time:   11:46:52
    File:   Vector_Erase.cpp
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
        vector<int>v(n);
        for(auto &x:v) cin >> x;
        int q; cin >> q;
        q--;
        int a,b; cin >> a >> b;
        a--, b--;
        v.erase(v.begin()+q);
        v.erase(v.begin()+a,v.begin()+b);
        int k = v.size();
        cout << k <<"\n";
        for(auto x:v) cout << x <<" ";
        cout <<"\n";

    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
