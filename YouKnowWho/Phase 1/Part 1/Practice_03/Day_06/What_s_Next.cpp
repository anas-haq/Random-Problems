/*
    Author: Anas
    Date:   06-01-2025
    Time:   00:50:49
    File:   What_s_Next.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;

    auto Anas = [&]() {
        int a, b, c; 
        while(true){
            cin >> a >> b >> c;
            if(a == 0 and b == 0 and c == 0){
                break;
            }
            int diff1 = b - a, diff2 = c-b;
            if(diff1 == diff2){
                cout <<"AP "<<c+diff1<<"\n";
            }
            else{
                cout <<"GP "<<c*(b/a)<<"\n";
            }
        }
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
