/*
    Author: Anas
    Date:   23-12-2024
    Time:   23:48:49
    File:   Expression.cpp
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
        int a,b,c; cin >> a>> b >> c;
        int mx = 0;
        int sum1 = a+b+c;
        int sum2 = (a+b)*c;
        int sum4 = a+(b*c);
        int sum3 = (a*b)+c;
        int sum5 = a*(b+c);
        int multi1 = a*b*c;
        mx= max({sum1,sum2,sum3,sum4,sum5,multi1});
        cout << mx;
        // int multi2= a*b+c;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
