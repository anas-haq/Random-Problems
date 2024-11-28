/*
    Author: Anas
    Date:   13-11-2024
    Time:   21:06:14
    File:   Too_Many_Oranges.cpp
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll test;
    cin >> test;

    auto Anas = [&]() {
        ll n, k;
        cin >> n >> k;

        if (k < 10) {
            cout << "NO\n";
            return;
        }

        ll ans=k/n;
        ll a=ans+k%n;
        if(k%n==0)
        {
            if(ans==10 || ans==11||ans==12)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
            
        }
        else if(a==10||a==11||a==12)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        

    };

    while (test--) {
        Anas();
    }

    return 0;
}
