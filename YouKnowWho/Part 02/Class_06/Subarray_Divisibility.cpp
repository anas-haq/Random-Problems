
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
        vector<int>v(n+1), pre(n+2);
        for(int i = 1; i <= n; i++){
            cin >> v[i];
        }
        pre[0]=0;
        for(int i = 0; i <=n; i++){
            pre[i] = pre[i-1] + v[i];
            pre[i]%=n;
            pre[i] = (pre[i] + n) % n;
        }
        ll ans = 0;
        map<int,int>mp;
        mp[pre[0]]++;
        for(int i = 1; i <= n; i++){
            ans += mp[pre[i]];
            mp[pre[i]]++;
        }

        cout << ans <<"\n";

    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
