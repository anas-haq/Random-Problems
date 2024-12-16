/*
    Author: Anas
    Date:   16-12-2024
    Time:   12:20:57
    File:   Create_A_New_String.cpp
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
        string s, t;  cin >> s >> t;
        int n= s.size();
        int m= t.size();
        cout<< n << " " << m <<"\n";
        cout << s << " " << t;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
