/*
    Author: Anas
    Date:   23-12-2024
    Time:   20:17:55
    File:   V_Creating_Expression_1.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int N = 22;
int n, expected_sum;
vector<int>a(N);
bool found;

void solve(int i, int total_sum) {
  if (i > n) { 
    if (total_sum == expected_sum) {
      found = true;
    }
    return;
  }
  solve(i + 1, total_sum + a[i]);
  solve(i + 1, total_sum - a[i]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;

    auto Anas = [&]() {
        cin >> n >> expected_sum;
        for(int i = 1; i<=n; i++){
            cin >> a[i];
        }
        found = false;
        solve(2, a[1]);
        if(!found){
            cout<<"NO";
            return;
        }
        cout<<"YES";
        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}


