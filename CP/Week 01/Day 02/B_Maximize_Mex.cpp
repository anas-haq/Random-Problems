#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    set<int> s;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (s.find(v[i]) != s.end())
        {
            mp[v[i]]++;
        }
        else
            s.insert(v[i]);
    }
    sort(v.begin(), v.end());
    int ans = n - 1;
    int a = 0;
    for (auto i : s)
    {
        if (i != a)
        {
            ans = a;
            break;
        }
        else
            a++;
    }
    if(x>ans)
    {
        cout<<ans<<endl;return;
    }
    if (ans == 0)
    {
        cout << 0 << endl;
        return;
    }
    int ans1 = ans;
    a = 0;
    while (a < n)
    {

        if(s.find(a)==s.end())
        {
            for(auto j:mp)
            {
                if(j.first<a && x<a)
                {
                    int val=(a-j.first);
                    
                    if(val< x || val%x){
                        int c=max(a,ans1);
                        cout<<c<<endl;return;
                    }
                    else{
                        mp[j.first]--;
                        if(mp.count(a)==0)mp.erase(a);
                        a++;
                    }
                }
                else
                {
                    int c=max(a,ans1);
                    cout<<c<<endl;return;
                }
            }
        }
        else a++;
    }
    int an = max(ans1, a);
    cout << an << endl;
}
int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}