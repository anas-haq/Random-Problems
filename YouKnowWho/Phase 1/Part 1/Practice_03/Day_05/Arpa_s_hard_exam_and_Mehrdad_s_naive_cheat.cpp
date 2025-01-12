/*
    Author: Anas
    Date:   29-12-2024
    Time:   23:42:07
    File:   Arpa_s_hard_exam_and_Mehrdad_s_naive_cheat.cpp
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
        ll n; cin >> n;
        if(n == 0){
            cout << 1;
            return;
        }
        if(!(n&1)){
            if(n%4 == 0){
                cout << 6;
                return;
            }
            cout<<4;
            return;
        }
        if(n%4 == 1){
            cout << 8;
            return;
        }
        cout << 2;

        // ll k = 8;
        // ll ans = 1;
        // for(int i = 1; i<=17; i++){
        //     ans*=k;
        // }

        /*

        1 -- 8
        2 -- 64
        3 -- 512
        4 -- 4096
        5 -- 32768
        6 -- 262144
        7 -- 2097152
        9 -- 134217728
        11 -- 8589934592
        13-- 549755813888
        15 -- 35184372088832
        17 -- 2251799813685248      
        
        */
        // cout << ans;
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
