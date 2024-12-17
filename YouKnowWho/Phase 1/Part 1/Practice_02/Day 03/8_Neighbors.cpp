/*
    Author: Anas
    Date:   17-12-2024
    Time:   19:42:12
    File:   8_Neighbors.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int N=105;
int n,m;
vector<vector<char>>v(N,vector<char>(N));

bool isInside(int i, int j){
    if(i >= 0 and i < n and j >= 0 and j <= m){
        return true;
    }
    else{
        return false;
    }
}
bool isValid(int i, int j){
    if(!isInside(i,j)){
        return true;
    }
    if(v[i][j] == 'x'){
        return true;
    }
    return false;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test = 1;
    // cin >> test;

    auto Anas = [&]() {
        cin >> n >> m;        
        for(int i = 0; i < n; i++){
            for( int j = 0; j < m; j++){
                cin >> v[i][j];
            }
        }
        int x, y; cin >> x >> y;
        x--,y--;
        if(isValid(x-1,y-1) and isValid(x-1,y) and isValid(x-1,y+1) and isValid(x,y-1) and isValid(x,y+1) and isValid(x+1,y-1) and isValid(x+1,y) and isValid(x+1,y+1)){
            cout<<"yes";
        }
        else{
            cout<<"no";
        }
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
