/*
    Author: Anas
    Date:   07-11-2024
    Time:   21:00:52
    File:   B_Triangles_on_a_Rectangle.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll test = 1;
    cin >> test;

    auto Anas = [&]()
    {
        ll w, h;
        cin >> w >> h;
        ll mx_x = 0;
        ll mx_y = 0;
        ll x = 2;

        for (ll j = 0; j < 2; j++)
        {
            ll idx;
            cin >> idx;
            vector<ll> dx(idx);
            for (ll i = 0; i < idx; i++)
            {
                cin >> dx[i];
            }
            ll dif = dx[idx - 1] - dx[0];
            mx_x = max(mx_x, dif);
        }
        // x = 2;
        for (ll j = 0; j < 2; j++)
        {
            ll idx;
            cin >> idx;
            vector<ll> dy(idx);
            for (ll i = 0; i < idx; i++)
            {
                cin >> dy[i];
            }
            ll dif = dy[idx - 1] - dy[0];
            mx_y = max(mx_y, dif);
        }
        ll ans1 = mx_x * h;
        ll ans2 = mx_y * w;
        // cout<<ans1<<" "<<ans2<<"\n";
        cout << max(ans1, ans2) << "\n";
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
