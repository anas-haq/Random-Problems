/*
    Author: Anas
    Date:   15-12-2024
    Time:   11:05:13
    File:   Lucky_Array.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test=1;
    // cin >> test;

    auto Anas = [&]() {
        int n;cin>>n;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            mp[x]++;
        }
        for(auto [x,y]:mp){
            if(y&1){
                cout<<"Lucky";
                return;
            }
            else{
                cout<<"Unlucky";
                return;
            }
        }
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
