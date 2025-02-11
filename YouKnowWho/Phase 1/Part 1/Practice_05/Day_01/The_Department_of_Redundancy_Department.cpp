#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int x;
  map<int, int> frequency;
  vector<int> order;
  while (cin >> x) {
    if (frequency[x] == 0) {
      order.push_back(x);
    }
    frequency[x]++;
  }
  // for (auto key_value_pair: frequency) {
  //   int key = key_value_pair.first;
  //   int value = key_value_pair.second;
  //   cout << key << ' ' << value << '\n'; // the keys will be in sorted order here which we don't want
  // }

  for (auto x: order) {
    cout << x << ' ' << frequency[x] << '\n';
  }
  return 0;
}

// O(n logn) where n = length of the array