#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, c, d;
    cin >> n >> a >> b; // Input the total number of people, minimum in front, and maximum behind
    c = n - a; // Number of positions Petr can occupy from the back
    d = b + 1; // Number of positions Petr can occupy from the front
    cout << std::min(c, d); // Print the minimum valid positions
    return 0;
}
