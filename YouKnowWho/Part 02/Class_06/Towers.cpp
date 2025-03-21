/*
    Author: Anas
    Date:   22-03-2025
    Time:   01:52:16
    File:   Towers.cpp
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
        int n; cin >> n;
        vector<int>v(n);
        for(auto &x:v) cin >> x;
        multiset<int>st;
        for(int i = 0; i < n; i++){
            auto it = st.upper_bound(v[i]);
            if(it != st.end()){
                st.erase(it);
            }
            st.insert(v[i]);
        }

        cout <<st.size() <<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
