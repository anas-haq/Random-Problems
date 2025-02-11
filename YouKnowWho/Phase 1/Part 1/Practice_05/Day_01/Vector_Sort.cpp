/*
    Author: Anas
    Date:   10-02-2025
    Time:   11:42:54
    File:   Vector_Sort.cpp
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
        for(auto &x : v) cin >> x;
        sort(v.begin(),v.end());
        for(auto x:v){
            cout << x <<" ";
        }
        cout <<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
