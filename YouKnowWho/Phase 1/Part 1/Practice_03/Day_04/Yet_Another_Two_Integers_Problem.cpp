/*
    Author: Anas
    Date:   24-12-2024
    Time:   18:01:28
    File:   Yet_Another_Two_Integers_Problem.cpp
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
        ll a,b; cin >> a>> b;
        ll mn = min(a,b);
        ll mx = max(a,b);
        ll ans = mx - mn;
        ll k = ans/10LL;
        if(ans%10){
            k++;
        }
        cout << k<<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
