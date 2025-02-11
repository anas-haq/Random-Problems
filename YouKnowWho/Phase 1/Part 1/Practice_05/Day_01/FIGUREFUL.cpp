/*
    Author: Anas
    Date:   11-02-2025
    Time:   11:31:07
    File:   FIGUREFUL.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    map<pair<int,int>,string>mp;
    while(n--){
        int a,b; cin >> a >> b;
        string s; cin >> s;
        mp[{a,b}]=s;
    }
    int test = 1;
    cin >> test;

    auto Anas = [&]() {
        int x,y; cin >> x >> y;
        cout << mp[{x,y}] <<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
