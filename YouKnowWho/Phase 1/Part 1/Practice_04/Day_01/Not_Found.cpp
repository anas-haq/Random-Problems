/*
    Author: Anas
    Date:   27-01-2025
    Time:   19:05:13
    File:   Not_Found.cpp
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
        string s; cin >> s;
        sort(s.begin(),s.end());
        s.erase(unique(s.begin(), s.end()), s.end());
        int n = s.size();
        if(n == 26){
            cout <<"None";
            return;
        }
        char x = 'a';
        for(int i = 0; i < 26; i++){
            if(x != s[i]){
                cout << x;
                return;
            }
            x++;
        }
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
