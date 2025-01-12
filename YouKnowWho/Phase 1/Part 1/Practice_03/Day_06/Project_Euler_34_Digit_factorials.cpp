/*
    Author: Anas
    Date:   05-01-2025
    Time:   01:28:18
    File:   Project_Euler_34_Digit_factorials.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int fact(int n){
    int ans = 1;
    for(int i = 1; i <=n; i++){
        ans*=i;
    }
    return ans;
}

bool is_fact(int n){
    int m = n;
    int sum = 0;
    while (n){
        int d = n%10;
        sum += fact(d);
        n/=10;        
    }
    return sum%m == 0;    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;

    auto Anas = [&]() {
        int n; cin >> n;
        ll ans = 0;
        for(int i = 10; i <= n; i++){
            if(is_fact(i)){
                ans+=i;
            }
        }
        cout << ans;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
