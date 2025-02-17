#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  string s1; cin >> s1;
  vector<char> v;
  int cnt = 0;
  for (char c : s1) {
    // if open bracket, push it
    if (c == '(') v.push_back(c);
    else {
      // otherwise try to match this closing bracket it with a stored open bracket
      if (!v.empty()) {
        cnt += 2;
        v.pop_back(); // as we have used up the open bracket, pop it
      }
    }
  }
  cout << cnt << endl;
  return 0;
}