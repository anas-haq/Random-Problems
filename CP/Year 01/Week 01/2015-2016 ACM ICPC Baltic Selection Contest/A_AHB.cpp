/*
    Author: Anas
    Date:   08-10-2024
    Time:   12:29:52
    File:   A_AHB.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t = 1;
    // cin >> t;

    auto Anas = [&]() {
        string a, b;
        cin >> a >> b;
        string ans;
        
        for (ll i = 0; i < (ll)(a.size()); i++) {
            ll c = a[i] - '0';
            ll d = b[i] - '0';
            ll k = abs(c - d);
            ans += (k + '0'); 
        }

        ll pos = ans.find_first_not_of('0');
        if (pos != string::npos) {
            ans = ans.substr(pos); 
        } else {
            ans = "0";  
        }
        
        cout << ans << '\n';  
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
