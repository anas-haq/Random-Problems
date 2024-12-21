/*
    Author: Anas
    Date:   20-12-2024
    Time:   19:08:01
    File:   I_Swapping_With_Matrix.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
vector<vector<int>>v(505,vector<int>(505));
int n, x, y;
// void swap_row(int x, int y){
//     vector<int>a(n+1), b(n+1);
//     for(int i = x; i <=x; i++){
//         for(int j =1; j <= n; j++){
//             a[j] = v[i][j];
//         }
//     }
//     for(int i = y; i <=y; i++){
//         for(int j =1; j <= n; j++){
//             b[j] = v[i][j];
//         }
//     }
//     for(int i = x; i <=x; i++){
//         for(int j =1; j <= n; j++){
//             v[i][j] = b[j];
//         }
//     }
//     for(int i = y; i <=y; i++){
//         for(int j =1; j <= n; j++){
//             v[i][j] = a[j];
//         }
//     }
// }
void swap_rows(int row1, int row2){
    for(int j = 1; j <= n; j++){
        swap(v[row1][j],v[row2][j]);
    }
}
void swap_cols(int col1, int col2){
    for(int i = 1; i <= n; i++){
        swap(v[i][col1],v[i][col2]);
    }
}
// void swap_col(int x, int y){
//     vector<int>a(n+1), b(n+1);
//     for(int i = 1; i <=n; i++){
//         for(int j = x; j <= x; j++){
//             a[i] = v[i][j];
//         }
//     }
//     for(int i = 1; i <= n; i++){
//         for(int j = y; j <= y; j++){
//             b[i] = v[i][j];
//         }
//     }
//     for(int i = 1; i <= n; i++){
//         for(int j = x; j <= x; j++){
//             v[i][j] = b[i];
//         }
//     }
//     for(int i = 1; i <= n; i++){
//         for(int j = y; j <= y; j++){
//             v[i][j] = a[i];
//         }
//     }
// }
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test = 1; 
    // cin >> test;

    auto Anas = [&]() {
        cin >> n >> x >> y;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> v[i][j];
            }
        }
        swap_rows(x,y);
        swap_cols(x,y);
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                // cin >> v[i][j];
                cout << v[i][j]<<" ";
            }
            cout << "\n";
        }
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
