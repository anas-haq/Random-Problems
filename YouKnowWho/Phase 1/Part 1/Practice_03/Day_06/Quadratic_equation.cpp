/*
    Author: Anas
    Date:   12-01-2025
    Time:   19:39:29
    File:   Quadratic_equation.cpp
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
        int a, b, c; cin >> a >> b >> c;
        ll val = (b*b)-(4*a*c);
        if(val < 0){
            cout << "No roots";
        }
        else if (val == 0){
            cout <<"One root: " <<(-b)/(2*a);
        }
        else{
            val = sqrtl(val);
            int i = ((-b)+val)/(2*a);
            int j = ((-b)-val)/(2*a);
            if(j > i){
                swap(i,j);
            }
            cout <<"Two roots: "<<j<<" "<<i;
        }
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
