#include <bits/stdc++.h>
using namespace std;

// Fibonacci sequence using memoization
int memo[20];

int fibonacci(int n) {
  if (n <= 1) {
    return n; // Base case: Fibonacci of 0 is 0 and Fibonacci of 1 is 1
  }
  if (memo[n] != -1) { // If the result is already calculated
    return memo[n]; // Return the result
  }
    return memo[n] = fibonacci(n - 1) + fibonacci(n - 2); // Recursive call: Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
}

int main() {
  int n = 6;

  // Initialize memo
  for (int i = 0; i < 20; ++i) {
    memo[i] = -1; // -1 means not calculated yet
  }

  // Fibonacci sequence
  cout << "Fibonacci of " << n << " is: " << fibonacci(n) << endl;

  return 0;
}