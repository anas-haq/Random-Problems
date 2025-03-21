#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 9;
int a[N];

int main() {
   ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    cin >> x >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    priority_queue<int, vector<int>, greater<int>> q;
    for (int i = 1; i <= n; i++) {
        q.push(a[i]);
    }
    long long ans = 0;
    while (q.size() > 1) {
        int x = q.top(); q.pop();
        int y = q.top(); q.pop();
        ans += x + y;
        q.push(x + y);
    }
    cout << ans << '\n';
    return 0;
}
// O(n log n)