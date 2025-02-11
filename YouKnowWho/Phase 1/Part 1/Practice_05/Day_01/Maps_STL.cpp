/*
    Author: Anas
    Date:   10-02-2025
    Time:   13:07:52
    File:   Maps_STL.cpp
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
        int q; cin >> q;
        map<string,int>mp;
        while(q--){
            int x; cin >> x;
            string s; cin >> s;           
            if(x == 1){
                int val; cin >> val;
                mp[s]+=val;
            }
            if(x == 2){
                // mp.erase(s);
                mp[s]=0;
            }
            if(x == 3){
                cout <<mp[s]<<"\n";
            }
        }
        // for(auto [x,y]:mp){
        //     cout << x <<" "<<y <<"\n";
        // }
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
