/*
    Author: Anas
    Date:   16-12-2024
    Time:   11:06:14
    File:   Is_B_a_subsequence_of_A.cpp
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
        int n,m; cin >> n >> m;
        vector<int> a(n),b(m);
        for(auto &x :a) cin >> x;
        for(auto &x :b) cin >> x;

        int j=0;
        for(int i = 0; i < n; i++){
            if(a[i] == b[j]){
                j++;
            }
            if(j==m){
                break;
            }
        }

        if(j == m){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
