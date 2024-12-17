/*
    Author: Anas
    Date:   16-12-2024
    Time:   15:37:19
    File:   Stones_on_the_Table.cpp
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
        int n; cin >> n;
        string s; cin >> s;
        int cnt = 0, mn = 0;
        for(int i = 0; i < n-1; i++){
            if(s[i] == s[i+1]){
                cnt++;
            }
            else{
                mn+=cnt;
                cnt = 0;
            }
        }
        // mn=max(mn,cnt);
        mn+=cnt;
        cout << mn;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}