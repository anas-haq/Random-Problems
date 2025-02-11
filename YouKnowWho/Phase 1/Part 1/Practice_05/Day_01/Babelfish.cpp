#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string line;
  map<string, string> mp;
  while (getline(cin, line)) {
    if (line.empty()) {
      continue;
    }
    if (find(line.begin(), line.end(), ' ') != line.end()) {
      stringstream ss(line);
      string a, b;
      ss >> a >> b;
      mp[b] = a;
    }
    else {
      string s = line;
      if (mp.find(s) != mp.end()) {
        cout << mp[s] << '\n';
      }
      else {
        cout << "eh\n";
      }
    }
  }
  return 0;
}