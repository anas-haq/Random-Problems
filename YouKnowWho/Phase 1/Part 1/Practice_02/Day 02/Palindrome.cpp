/*
    Author: Anas
    Date:   16-12-2024
    Time:   13:01:08
    File:   Palindrome.cpp
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
        int n = s.size();
        for(int i = 0; i < (n>>1); i++){
            if(s[i]!=s[n-i-1]){
                cout<<"NO";
                return;
            }
        }
        cout<<"YES";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
