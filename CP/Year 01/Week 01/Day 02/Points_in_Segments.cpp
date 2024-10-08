#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// Fast I/O
void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    fast_io();

    int t; 
    cin >> t;
    
    for (int j = 1; j <= t; j++) {
        int n, q;
        cin >> n >> q;
        
        vector<int> points(n);
        for (int i = 0; i < n; i++) {
            cin >> points[i];
        }
        
        cout << "Case " << j << ":" << endl;
        
        while (q--) {
            int A, B;
            cin >> A >> B;

            // Use lower_bound to find the first point >= A
            // Use upper_bound to find the first point > B
            int left = lower_bound(points.begin(), points.end(), A) - points.begin();
            int right = upper_bound(points.begin(), points.end(), B) - points.begin();
            
            // Points in range [A, B] are between indices [left, right-1]
            cout << right - left << endl;
        }
    }

    return 0;
}
