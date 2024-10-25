/*
    Author: Anas
    Date:   22-10-2024
    Time:   12:11:54
    File:   B_GCD_Problem.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;

    auto Anas = [&]()
    {
        ll n;
        cin >> n;

        if (n & 1)
        {            
            vector<ll>v={3, 5, 7,11, 13, 17, 19,23, 29,31, 37,41, 43, 47,53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
            n--;
            for(auto i:v)
            {
                ll a=__gcd(i,n-i);
                if(a==1)
                {
                    cout<<i<<" "<<n-i<<" "<<1<<"\n";
                    return;
                }
            }
        }
        else
        {            
            cout<<n-3<<" "<<2<<" "<<1<<"\n";
        }
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
