/*
    Author: Anas
    Date:   28-01-2025
    Time:   19:47:38
    File:   Enormous_Input_and_Output_Test.cpp
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
        int a, b; cin >> a >> b;
        cout << (1LL*a*b) <<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
