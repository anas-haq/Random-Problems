#include<bits/stdc++.h>
using namespace std;

// this code takes a 2D array as input
// flattens it and prints it in one line
int main() {
    int n, m; cin >> n >> m;
    auto get_id = [&](int i, int j) { // get id for cell (i, j)
        return i * m + j;
    };
    int f[n * m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int x; cin >> x;
            f[get_id(i, j)] = x;
        }
    }
    for (int i = 0; i < n * m; i++) {
        cout << f[i] << ' ';
    }
    return 0;
}