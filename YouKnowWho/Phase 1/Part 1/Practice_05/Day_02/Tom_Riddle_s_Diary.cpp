/*
    Author: Anas
    Date:   14-02-2025
    Time:   10:45:24
    File:   Tom_Riddle_s_Diary.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    cin >> test;
    map<string,int>mp;
    auto Anas = [&]() {
        string s; cin >> s;
        mp[s]++;
        if(mp[s] > 1){
            cout <<"YES\n";
        }
        else{
            cout <<"NO\n";
        }
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
