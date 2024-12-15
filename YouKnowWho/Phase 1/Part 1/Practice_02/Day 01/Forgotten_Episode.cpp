/*
    Author: Anas
    Date:   14-12-2024
    Time:   22:36:46
    File:   Forgotten_Episode.cpp
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
        int n;
        cin>>n;

        set<int>s;

        for(int i=0;i<n-1;i++){
            int x;
            cin>>x;
            s.insert(x);
        }
        
        ll cnt=1;
        for(auto i:s){
            if(i!=cnt){
                cout<<cnt;
                return;
            }
            cnt++;
        }
        cout<<cnt;

    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
