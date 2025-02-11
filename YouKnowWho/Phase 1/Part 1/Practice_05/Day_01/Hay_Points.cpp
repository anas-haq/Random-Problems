#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int m, q; cin >> m >> q;
  map<string, int> mp;
  for (int i = 1; i <= m; i++) {
    string s; int x; cin >> s >> x;
    mp[s] = x;
  }
  while (q--) {
    string word;
    long long salary = 0;
    while (cin >> word) {
      if (word == ".") break;
      if (mp.find(word) != mp.end()) {
        salary += mp[word];
      }
    }
    cout << salary << '\n';
  }
  return 0;
}