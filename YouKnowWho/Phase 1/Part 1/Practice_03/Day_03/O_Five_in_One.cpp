/*
    Author: Anas
    Date:   20-12-2024
    Time:   19:29:30
    File:   O_Five_in_One.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int n;
vector<int>v(105);
void FindMax(){
    int mx = -1e9;
    for(int i =1; i <= n; i++){
        mx = max(mx, v[i]);
    }
    cout <<"The maximum number : "<<mx<<"\n";
}

void FindMin(){
    int mn = 1e9;
    for(int i =1; i <= n; i++){
        mn = min(mn, v[i]);
    }
    cout <<"The minimum number : "<<mn<<"\n";
}
void FindPrime(){
    int cnt = 0;
    for (int i = 1; i <= n; i++){
        int Prime = v[i];
        bool ok = true;
        for (int j = 2; j < Prime; j++){
            if(Prime % j == 0){
                ok = false;
                break;
            }
        }
        if(ok and Prime != 1){
            cnt++;
        }
    }
    cout << "The number of prime numbers : "<<cnt<<"\n";
}
void PalindromeFind(){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        int k = v[i];
        if(k <= 9){
            cnt++;
            continue;
        }
        string s = to_string(k);
        int m = s.size();
        bool ok = true;
        for(int j = 0; j<(m>>1); j++){
            if(s[j]!=s[m-j-1]){
                ok = false;
                break;
            }
        }
        if(ok){
            cnt++;
        }        
    }
    cout<<"The number of palindrome numbers : "<<cnt<<"\n";
}
int count_divisors(int n) {
  int count = 0;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) count++;
  }
  return count;
}
 
int get_maximum_number_with_maximum_number_of_divisors(int n) {
  int max_divisor_count = INT_MIN;
  int number = INT_MIN;
  for (int i = 1; i <= n; i++) {
    int divisor_count = count_divisors(v[i]);
    if (divisor_count > max_divisor_count) {
      max_divisor_count = divisor_count;
      number = v[i];
    }
    else if (divisor_count == max_divisor_count) {
      number = max(number, v[i]);
    }
  }
  return number;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;

    auto Anas = [&]() {
        cin >> n;
        for(int i = 1; i<= n; i++){
            cin >> v[i];
        }
        FindMax();
        FindMin();
        FindPrime();
        PalindromeFind();
        cout << "The number that has the maximum number of divisors : " << get_maximum_number_with_maximum_number_of_divisors(n) << '\n';
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
