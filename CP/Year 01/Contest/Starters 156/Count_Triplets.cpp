#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Function to count valid triplets
void solve() {
    ll n;
    cin >> n;
    
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    ll count = 0;
    
    // We iterate over all possible (i, k) pairs
    for (ll i = 1; i <= n; i++) {
        for (ll k = i; k <= n; k++) {
            ll diff = abs(a[i] - a[k]);  // |A[i] - A[k]|
            for (ll j = i; j <= k; j++) {
                ll index_diff = abs(i - j) + abs(j - k);  // |i - j| + |j - k|
                if (diff == index_diff) {
                    count++;
                }
            }
        }
    }
    
    cout << count << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    
    while (t--) {
        solve();
    }

    return 0;
}
