#include <bits/stdc++.h>
using namespace std;

using ll = long long;
vector<int> v(100);
int x;
bool search(int l, int r){
    if( l > r) return false;
    int mid = (l+r)/2;
    if(x == v[mid]){
        return true;
    }
    else if(x > v[mid]){
        return search(mid+1, r);
    }
    else{
        return search(l, mid - 1);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }

    x = 8;
    cout << boolalpha << search(1, n) <<"\n";
    return 0;
}
