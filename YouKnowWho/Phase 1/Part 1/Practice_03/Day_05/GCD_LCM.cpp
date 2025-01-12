/*
    Author: Anas
    Date:   02-01-2025
    Time:   23:49:26
    File:   GCD_LCM.cpp
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
        if(b%a != 0){
            cout <<"-1\n";
            return;
        }
        cout << a <<" "<< b <<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
