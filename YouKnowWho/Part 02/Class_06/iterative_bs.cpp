#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 1e5+5;
vector<int> v(N);
int x;
bool search(int l, int r){
    while(l <= r){
        int mid = (l+r)/2;
        if(v[mid] == x){
            return true;
        }
        else if(x < v[mid]){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return false;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,q; cin >> n >> q;
    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }
    while(q--){
        cin >> x;
        if(search(1,n)){
            cout <<"YES\n";
        }
        else{
            cout <<"NO\n";
        }
    }
    return 0;
}
