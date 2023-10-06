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
    int n, s; cin >> n >> s;
    ll sum = 0;
    fr(i, 0, n+1, 1)
    {
        fr(j, 0, n +1, 1)
        {
            int k = s - i - j;
            if(k >= 0 && k <= n) sum += 1;
        }
    }
    cout << sum << el;
}
signed main()
{
    ROCKET

    int t = 1;
    // cin >> t;
    while(t--) solve();
    
    return 0;
}