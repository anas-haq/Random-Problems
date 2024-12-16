/*
    Author: Anas
    Date:   16-12-2024
    Time:   12:23:45
    File:   Let_s_use_Getline.cpp
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
        string s;
        while(cin >> s){
            for (int i = 0; i < s.size(); i++){
                if(s[i]=='\\'){
                    return;
                }
                cout<<s[i];
            }
            cout<<" ";
        }
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
