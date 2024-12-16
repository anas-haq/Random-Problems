/*
    Author: Anas
    Date:   16-12-2024
    Time:   12:57:47
    File:   Good_or_Bad.cpp
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
        for (int i = 0; i < (int)s.size()-2; i++){
            string k = s.substr(i,3);
            if(k == "010" or k == "101"){
                cout<<"Good\n";
                return;
            }
        }
        cout<<"Bad\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
