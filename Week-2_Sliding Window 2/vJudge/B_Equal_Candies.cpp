#include<bits/stdc++.h>
#define ROCKET ios :: sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long int
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
    int mn = INT_MAX;
    ll sum = 0;
    fr(i, 0, n, 1) 
    {
        cin >> v[i];
        mn = min(mn, v[i]);
    }
    fr(i, 0, n, 1) 
    {
        sum += v[i] - mn;
    }
    cout << sum << el;
}
signed main()
{
    ROCKET

    int t = 1;
    cin >> t;
    while(t--) solve();
    
    return 0;
}