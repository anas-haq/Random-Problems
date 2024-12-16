/*
    Author: Anas
    Date:   16-12-2024
    Time:   13:04:04
    File:   Count_Letters.cpp
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
        string s; cin >> s;
        int len = s.size();
        map<char,int> mp;
        for(int i = 0; i < len; i++){
            mp[s[i]]++;
        }
        for (auto [x,y]:mp){
            cout<< x <<" : "<< y <<"\n";
        }
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
