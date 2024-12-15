/*
    Author: Anas
    Date:   15-12-2024
    Time:   13:00:40
    File:   Count_Subarrays.cpp
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
        int n; cin >> n;
        vector<int>v(n);
        for (auto &x : v) cin >> x;
        
        int cnt=0;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                bool ok = true;
                for (int k = i; k <= j-1; k++){
                    if(v[k] > v[k+1]){
                        // cout<<v[k]<<" "<<v[k+1];
                        ok = false;
                        break;
                    }
                }
                // cout<<"\n";
                if(ok){
                    cnt++;
                }
            }
        }

        cout<<cnt<<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
