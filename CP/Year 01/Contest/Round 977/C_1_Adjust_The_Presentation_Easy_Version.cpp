/*
    Author: Anas
    Date:   06-10-2024
    Time:   19:41:34
    File:   C_1_Adjust_The_Presentation_Easy_Version.cpp
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
        ll n,m,q;
        cin>>n>>m>>q;
        vector<ll>a(n),b(m);
        for(auto &x:a)cin>>x;
        for(auto &x:b)cin>>x;
        vector<bool>v(n+1,false);
        ll j=0;
        for (ll i = 0; i <m; i++)
        {
            if(a[j]==b[i])
            {
                v[a[j]]=true;
                j++;
            }
            else if(v[b[i]])
            {
                continue;
            }
            else
            {
                cout<<"TIDAK\n";
                return;
            }            
        }
        cout<<"YA\n";
        

    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
