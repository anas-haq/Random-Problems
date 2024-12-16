/*
    Author: Anas
    Date:   16-12-2024
    Time:   12:26:39
    File:   Compare.cpp
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
        string x,y; cin >> x >> y;
        if(x==y){
            cout<<x;
        }
        else if(x>y){
            cout<<y;
        }
        else{
            cout<<x;
        }
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
