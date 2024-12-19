#include <bits/stdc++.h>
using namespace std;



int main() {
  int n = 10;
  double sum = 0;
  for (int i = 1; i <= n; i++){
    sum+=log10(i);
    cout<< sum <<" ";
  }

  cout<<floor(sum)+1<<"\n";


  return 0;
}