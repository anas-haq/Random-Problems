/*
    Author: Anas
    Date:   07-11-2024
    Time:   15:33:35
    File:   B_MEXor_Mixup.cpp
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
    const int N = (3 * 1e5) + 1;

    vector<int> XORs(N);
    // void generateXOR()
    // {
    int XOR = 0;
    for (int i = 0; i <= N; i++)
    {
        XORs[i] = XOR;
        XOR ^= i;
    }
    // }

    auto Anas = [&]()
    {
        int a, b;
        cin >> a >> b;

        int XOR = XORs[a];

        if (XOR != b)
        {
            if ((XOR ^ b) == a)
                cout << a + 2;
            else
                cout << a + 1;
            return;
        }

        cout << a;
    };

    while (test--)
    {
        Anas();
        cout<<"\n";
    }

    return 0;
}
