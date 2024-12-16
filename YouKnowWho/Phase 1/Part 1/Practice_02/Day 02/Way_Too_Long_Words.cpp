/*
    Author: Anas
    Date:   16-12-2024
    Time:   12:44:46
    File:   Way_Too_Long_Words.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test = 1;
    cin >> test;

    auto Anas = [&]() {
        string s; cin >> s;
        int n = s.size();
        if(n <= 10){
            cout<<s<<"\n";
            return;
        }
        int m = n-2;
        cout<<s[0]<<m<<s[n-1]<<"\n";

    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
