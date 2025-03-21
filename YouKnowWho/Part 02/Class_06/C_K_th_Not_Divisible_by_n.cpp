#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int n,k;
bool ok(ll x){
    ll sum = x - x/n;
    return sum >= k;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        ll l = 1, r = 1e10, ans = 0;
        while(l <= r){
            ll mid = l + (r-l)/2;
            if(ok(mid)){
                ans = mid;
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        cout << ans <<"\n";
    }
    return 0;
}
