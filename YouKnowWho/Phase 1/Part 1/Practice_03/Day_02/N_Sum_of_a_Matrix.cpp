/*
    Author: Anas
    Date:   21-12-2024
    Time:   17:07:50
    File:   N_Sum_of_a_Matrix.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int row, col;
vector<vector<int>>a(105,vector<int>(105)),b(105,vector<int>(105)) ;
void GetSum(int i, int j){
    if(i >= row ){
        return;
    }
    if( j >= col){
        GetSum(i+1,0);
        return;
    }
    if(j == col-1){
        cout << a[i][j]+b[i][j]<<"\n";
    }
    else{
        cout << a[i][j]+b[i][j]<<" ";
    }
    GetSum(i,j+1);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1;
    // cin >> test;

    auto Anas = [&]() {
        cin >> row >>  col;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                cin >> a[i][j];
            }
        }
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                cin >> b[i][j];
            }
        }
        GetSum(0,0);
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
