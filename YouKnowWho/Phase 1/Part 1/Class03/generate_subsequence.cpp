#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> v(22);
vector<bool> is_taken(22);

void rec(int pos){
    if(pos > n){
        for( int i = 1; i <= n; i++){
            if(is_taken[i]){
                cout << v[i] <<" ";
            }
        }
        cout << "\n";
        return;
    }
    is_taken[pos] = false;
    rec(pos + 1);

    is_taken[pos] = true;
    rec(pos + 1);
}


int main() {
    cin >> n;  
    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }

    rec(1);
    return 0;
}