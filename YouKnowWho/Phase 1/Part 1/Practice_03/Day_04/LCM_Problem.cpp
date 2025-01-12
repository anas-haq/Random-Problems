/*
    Author: Anas
    Date:   24-12-2024
    Time:   18:26:22
    File:   LCM_Problem.cpp
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
        int a, b; cin >> a>>b;
        if((a*2) <= b){
            cout << a<<" "<<(2*a)<<"\n";
            return;
        }
        cout <<"-1  -1\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
