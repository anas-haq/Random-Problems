/*
    Author: Anas
    Date:   13-02-2025
    Time:   19:08:11
    File:   Soldier_and_Cards.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int Max = 1e5+9;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;

    auto Anas = [&]() {
        int n; cin >> n; 
        int k1,k2; cin >> k1;
        queue<int>q1,q2,q3,q4;
        vector<int>a(k1);
        for(auto &x:a){
            cin >> x;
            q1.push(x);
        }
        cin >> k2;
        vector<int>b(k2);
        for(auto &x:b){
            cin >> x;
            q2.push(x);
        }
        q3 = q1;
        q4 = q2;
        int cnt = 0;
        while(! q1.empty() and ! q2.empty()){
            cnt++;
            int x = q1.front();
            q1.pop();
            int y = q2.front();
            q2.pop();
            if(x > y){
                q1.push(y);
                q1.push(x);
            }
            else if(x < y){
                q2.push(x);
                q2.push(y);
            }
            if((q3 == q1 and q4 == q2) or cnt > Max){
                cout <<"-1\n";
                return;
            }
        }
        if(!q1.empty()){
            cout << cnt <<" "<<1<<"\n";
            return;
        }
        if(!q2.empty()){
            cout << cnt <<" " << 2 <<"\n";
            return;
        }

    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
