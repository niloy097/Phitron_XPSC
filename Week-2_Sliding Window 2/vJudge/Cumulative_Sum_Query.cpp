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
    vector<int> v(n);
    fr(i, 0, n, 1)
    {
        int x;
        cin >> x;
        if(i == 0) v[0] = x;
        else v[i] = v[i-1] + x;
    }
    int q;
    cin >> q;
    while(q--)
    {
        int i, j;
        cin >> i >> j;
        if(i != 0)cout << v[j] - v[i-1] << el;
        else cout << v[j] << el;
    }
}
signed main()
{
    ROCKET

    int t = 1;
    // cin >> t;
    while(t--) solve();
    
    return 0;
}