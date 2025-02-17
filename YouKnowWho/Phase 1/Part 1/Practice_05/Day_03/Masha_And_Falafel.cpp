/*
    Author: Anas
    Date:   15-02-2025
    Time:   20:58:33
    File:   Masha_And_Falafel.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    cin >> test;

    auto Anas = [&]() {
        int n; cin >> n;
        set<int>st;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            st.insert(x);
            cout << st.size()<<" ";
        }
        cout <<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
