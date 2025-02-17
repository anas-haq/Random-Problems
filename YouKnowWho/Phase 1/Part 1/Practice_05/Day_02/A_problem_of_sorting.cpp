/*
    Author: Anas
    Date:   14-02-2025
    Time:   10:30:11
    File:   A_problem_of_sorting.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
// bool cmp(pair<string,int>a, pair<string,int>b){
//     return a.first > b.first;
// }
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    cin >> test;

    auto Anas = [&]() {
        int n; cin >> n;
        vector<pair<int,string>>v;
        for(int i = 0; i < n; i++){
            string s; cin >> s;
            int age; cin >> age;
            v.push_back({age,s});
        }
        sort(v.rbegin(),v.rend());
        for(auto [x,y]:v){
            cout << y <<"\n";
        }
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
