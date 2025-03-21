/*
    Author: Anas
    Date:   18-03-2025
    Time:   02:31:04
    File:   C_Maximum_Median.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int k,n;
bool ok(int x,vector<int>a){
    ll sum = 0;
    for(int i = (n+1)/2; i <= n; i++){
        if(a[i] < x){
            sum+= (x - a[i]);
        }
    }
    return sum <= k;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> k;
    vector<int>v(n+1);
    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }
    sort(v.begin()+1,v.end());
    int l = 0, r = 2e9, ans = 0;
    while(l <= r){
        int mid = l + (r - l)/2;
        if(ok(mid,v)){
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }

    cout << ans <<"\n";
    
    return 0;
}




