/*
    Author: Anas
    Date:   15-02-2025
    Time:   20:43:07
    File:   Masha_And_The_Bear.cpp
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
        int n; cin >> n;
        deque<int>dq;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            dq.push_back(x);
        }
        ll masha = 0, bear = 0;
        while(!dq.empty()){
            int take = 2;
            while(!dq.empty() and take--){
                int x = dq.front();
                dq.pop_front();
                masha+=x;
            }
            take = 2;
            while(!dq.empty() and take--){
                int x = dq.back();
                dq.pop_back();
                bear+=x;
            }
        }
        if(masha == bear){
            cout <<"Draw\n";
            return;
        }
        cout << ((masha > bear)?"Masha\n":"The Bear\n");
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
