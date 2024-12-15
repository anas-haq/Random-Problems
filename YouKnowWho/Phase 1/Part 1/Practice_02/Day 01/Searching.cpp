/*
    Author: Anas
    Date:   15-12-2024
    Time:   10:46:58
    File:   Searching.cpp
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
        vector<int>v(n);
        for(auto &x:v)cin>>x;
        int idx=-1;
        int val;cin>>val;
        for(int i=0;i<n;i++){
            if(val==v[i]){
                cout<<i;
                return;
            }
        }

        cout<<idx;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
