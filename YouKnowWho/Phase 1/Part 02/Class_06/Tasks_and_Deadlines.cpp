/*
    Author: Anas
    Date:   22-03-2025
    Time:   01:33:36
    File:   Tasks_and_Deadlines.cpp
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
        ll ans = 0;
        for(int i = 0; i < n; i++){
            int duration, deadline; cin >> duration >> deadline;
            v[i] = duration;
            ans += deadline;
        }
        sort(v.begin(),v.end());
        ll finishing_time = 0;
        for(auto duration:v){
            finishing_time += duration;
            ans -= finishing_time;
        }
        cout << ans <<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
