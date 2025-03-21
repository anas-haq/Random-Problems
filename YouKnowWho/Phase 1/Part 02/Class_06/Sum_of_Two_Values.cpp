#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 9;
int a[N];

int main() {
    int n, x;
    cin >> n >> x;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    map<int, int> mp;
    for (int i = 1; i <= n; i++) {
        // fix that a[i] is the right element
        // now we need to find x - a[i] in the previous elements
        if (mp.find(x - a[i]) != mp.end()) {
            cout << mp[x - a[i]] << ' ' << i << '\n';
            return 0;
        }
        mp[a[i]] = i;
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}
// O(n log n)