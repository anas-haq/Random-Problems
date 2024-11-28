/*
    Author: Anas
    Date:   19-11-2024
    Time:   19:29:20
    File:   B_Turtle_and_an_Infinite_Sequence.cpp
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
        ll n, m;
        cin >> n >> m;

        if(m==0)
        {
            cout<<n<<"\n";
            return;
        }

        ll left=max(0LL,n-m),Right=n+m;
        ll Range=Right-left+1;

        ll ans=0;

        for(ll i=0;i<31;i++)
        {
            bool st=(left&(1<<i))||(Right&(1<<i));
            if(Range>(1<<i))
            {
                st=1;
            }
            if(st)
            {
                ans|=(1<<i);
            }
        }
        cout<<ans<<"\n";

    };

    while (test--)
    {
        Anas();
    }

    return 0;
}
