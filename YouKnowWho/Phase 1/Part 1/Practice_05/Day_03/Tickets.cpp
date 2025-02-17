/*
    Author: Anas
    Date:   15-02-2025
    Time:   20:33:50
    File:   Tickets.cpp
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
        int n; cin >> n;
        queue<int>q;
        while(n--){
            int a, b; cin >> a >> b;
            if(a == 1){
                q.push(b);
            }
            else{
                if(!q.empty()){
                    int val = q.front();
                    q.pop();
                    if(val == b){
                        cout <<"Yes\n";
                    }
                    else{
                        cout <<"No\n";
                    }
                }
            }
        }
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
