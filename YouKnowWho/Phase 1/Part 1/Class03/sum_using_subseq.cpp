#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> v(22);
int cnt;
int target_sum;
void rec(int pos, int sum){
    if(pos == (n+1)){
        if(sum == target_sum){
            cnt++;
        }
        return;
    }
    // is_taken[pos] = false;
    rec(pos + 1, sum + v[pos]);

    // is_taken[pos] = true;
    rec(pos + 1, sum);
}


int main() {
    cin >> n;  
    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }
    cin >> target_sum;

    rec(1,0);

    cout<< cnt <<"\n";
    return 0;
}