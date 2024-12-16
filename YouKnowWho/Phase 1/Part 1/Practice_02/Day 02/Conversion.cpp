/*
    Author: Anas
    Date:   16-12-2024
    Time:   12:36:24
    File:   Conversion.cpp
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
        for (int i = 0; i < n; i++){
            if(s[i]==','){
                cout<<" ";
            }
            else if(s[i] >= 'a' and s[i] <= 'z'){
                char k = s[i]-'a';
                k += 'A';
                cout<<k;
            }
            else{
                char k = s[i]-'A';
                k += 'a';
                cout<<k;
            }            
        }
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
