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
    fr(i, 0, n, 1)
    {   
        cin >> v[i];
    }
    int mx = 0;
    int ans = -1;
    for(int i = 2; i <= 1000; i++)
    {
        int cnt = 0;
        for(int j = 0; j < n; j++)
        {
            if(v[j] % i == 0) cnt++;
            if(mx < cnt) mx = cnt, ans = i;
        }
    }
    cout << ans << el;
}
signed main()
{
    ROCKET

    int t = 1;
    // cin >> t;
    while(t--) solve();
    
    return 0;
}