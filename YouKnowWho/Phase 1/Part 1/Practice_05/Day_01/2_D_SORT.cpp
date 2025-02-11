/*
    Author: Anas
    Date:   10-02-2025
    Time:   13:21:47
    File:   2_D_SORT.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
bool cmp(pair<int,int>a,pair<int,int>b){
    if(a.first == b.first){
        return a.second > b.second;
    }
    return a.first < b.first;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    cin >> test;

    auto Anas = [&]() {
        int n; cin >> n;
        vector<pair<int,int>>v;
        for(int i = 0; i < n; i++){
            int a, b; cin >> a >> b;
            v.push_back({a,b});
        }
        sort(v.begin(),v.end(),cmp);
        for(auto [x,y]:v){
            cout << x <<" "<<y <<"\n";
        }
        // cout <<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
