/*
    Author: Anas
    Date:   16-12-2024
    Time:   12:29:14
    File:   Strings.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test = 1;
    // cin >> test;

    auto Anas = [&]() {
        string x, y; cin >> x >> y;
        int n=x.size();
        int m=y.size();
        cout << n <<" "<< m <<"\n";
        cout << (x + y) << '\n';
        swap(x[0], y[0]);
        cout << x << " " << y;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
