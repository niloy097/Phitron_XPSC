#include<bits/stdc++.h>
#define ROCKET ios :: sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define fr(x, s, e, b) for(int x = s; x < e; x = x + b)
#define efr(val, where) for(auto& val : where)
#define el '\n'
#define co cout
#define ci cin
#define vtr vector
#define pb push_back
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vtr<int> v(n);
    map<int, int> mp;
    mp[0] = -1;
    fr(i, 0, n, 1) cin >> v[i];
    int s; cin >> s;
    int sum = 0;
    int mx = 0;
    fr(i, 0, n, 1)
    {
        sum += v[i];

        if(mp.find(sum - s)!=mp.end())
        {
            mx = max(mx, abs(i - mp[sum-s]));
        }
        if(mp.find(sum) == mp.end())
        {
            mp[sum] = i;
        }
    }

    cout << mx << el;
}
signed main()
{
    ROCKET

    int t = 1;
    // cin >> t;
    while(t--) solve();
    
    return 0;
}