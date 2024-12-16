/*
    Author: Anas
    Date:   16-12-2024
    Time:   13:08:21
    File:   I_Love_strings.cpp
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
        string s, t; cin >> s >> t;
        int n = s.size(), m = t.size();
        if(n == m){
            for(int i = 0; i < n; i++){
                cout<<s[i];
                cout<<t[i];
            }
            cout<<"\n";
            return;
        }

        if(n>m){
            for(int i = 0; i < m; i++){
                cout<<s[i];
                cout<<t[i];
            }
            for(int i = m; i < n; i++){
                cout<<s[i];
                // cout<<t[i];
            }
            cout<<"\n";
            return;
        }
        for(int i = 0; i < n; i++){
            cout<<s[i];
            cout<<t[i];
        }
        for(int i = n; i < m; i++){
            // cout<<s[i];
            cout<<t[i];
        }
        cout<<"\n";
        return;

    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
