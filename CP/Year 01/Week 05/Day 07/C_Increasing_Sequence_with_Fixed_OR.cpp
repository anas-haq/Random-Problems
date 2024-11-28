/*
    Author: Anas
    Date:   19-11-2024
    Time:   10:18:40
    File:   C_Increasing_Sequence_with_Fixed_OR.cpp
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
        ll n, curr;
        cin >> n;
        curr = n;

        ll max_bit = __lg(n);
        // cout<<max_bit<<"\n";
        ll tot = (1LL << max_bit);
        // cout<<tot<<"\n";
        if (tot == n)
        {
            cout << 1 << '\n';
            cout << n << '\n';
            return;
        }

        vector<ll> bits;
        while (curr)
        {
            if (curr & 1)
            {
                bits.push_back(1);
            }
            else
            {
                bits.push_back(0);
            }
            curr>>=1LL;
        }

        deque<ll> ans;
        ans.push_front(n);

        for (ll i = 0; i <(ll)(bits.size()); i++)
        {
            if (bits[i] == 1)
            {
                ll val = n - (1LL << i);
                ans.push_front(val);
            }
        }

        // for (ll i = 1;i < sz(ans);i++) {
        //     ll val = (ans[i] | ans[i - 1]);
        //     cout << val << " ";
        // }
        // cout << '\n';

        cout << (ll)(ans.size()) << '\n';
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << '\n';
    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
