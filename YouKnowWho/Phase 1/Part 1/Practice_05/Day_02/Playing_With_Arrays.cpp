/*
    Author: Anas
    Date:   15-02-2025
    Time:   11:13:20
    File:   Playing_With_Arrays.cpp
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
        deque<int>A,R;
        for(int i = 1; i <= n; i++){
            R.push_back(i);
        }
        for(int i =1; i<=n; i++){
            if(!A.empty()){
                int Last_of_A = A.back();
                A.pop_back();
                A.push_front(Last_of_A);
                // int Last_of_R = R.back()
            }
            int last_of_r = R.back();
            R.pop_back();
            A.push_front(last_of_r);
        }
        for(int i = 0; i < n; i++){
            cout <<A[i];
            if(i < n-1){
                cout <<" ";
            }
        }
        cout <<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
