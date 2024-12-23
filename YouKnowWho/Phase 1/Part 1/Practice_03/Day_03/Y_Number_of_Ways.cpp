/*
    Author: Anas
    Date:   23-12-2024
    Time:   21:45:21
    File:   Y_Number_of_Ways.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int ways = 0;
void go (int s, int e){
    if(s > e) {
        return;
    }
    if(s == e){
        ways++;
        return;
    }
    go(s+1, e);
    go(s+2, e);
    go(s+3, e);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;

    auto Anas = [&]() {
        int n, m;
        cin >> n >> m;
        go(n, m);
        cout << ways;

    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
