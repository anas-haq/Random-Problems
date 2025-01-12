/*
    Author: Anas
    Date:   01-01-2025
    Time:   21:03:36
    File:   Lottery_Tickets.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 1e6;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    cin >> test;

    auto Anas = [&]() {
        int n; cin >> n;
        vector<int>v(n);
        int x = -1, y =-1;
        for(int i = 0; i <n; i++){
            cin >> v[i];
            if(x == -1){
                x = v[i];
            }
        }
        sort(v.begin(),v.end());
        for(int i = 0; i <n; i++){
            if(x == v[i]){
                y = i;
                break;
            }
        }
        ll cnt = 1;
        if(y == 0){
            cnt+=(x-1);
            int i = v[1];
            int j = i - x;
            j>>=1;
            cnt+=j;
            cout << cnt <<"\n";
            return;
        }
        if(y == n-1){
            cnt+=(N-x);
            int i = v[n-2];
            int j = x - i;
            j >>= 1;
            cnt+=j;
            cout << cnt <<"\n";
            return;
        }
        int i = v[y-1];
        int j = v[y+1];
        int p = x-i;
        p >>= 1;
        cnt+=p;
        p = j - x;
        p >>= 1;
        cnt+=p;
        cout << cnt <<"\n";

    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
