#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 1e5+5;
vector<int> v(N);
int x;
int search(int l, int r){    
    int ans = -1;
    while(l <= r){
        int mid = (l+r)/2;
        if(v[mid] == 1){
            ans = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }
    cout << search(1,n) <<"\n";
    
    return 0;
}
