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
    vtr<ll> v(n);
    vtr<ll> v1(n);
    vtr<ll> sorted(n);
    fr(i, 0, n, 1)
    {
        int x;
        cin >> x;
        sorted[i] = x;
        if(i == 0) v[0] = x;
        else v[i] = v[i-1] + x;
    }
    // fr(i, 0, n, 1)
    // {
    //     cout << sorted[i] << " ";
    // }
    // cout << el;
    // fr(i, 0, n, 1)
    // {
    //     cout << v1[i] << " ";
    // }
    // cout <<el;
    sort(sorted.begin(), sorted.end());
    // fr(i, 0, n, 1)
    // {
    //     cout << sorted[i] << " ";
    // }
    // cout << el;
    fr(i, 0, n, 1)
    {
        if(i == 0) v1[0] = sorted[0];
        else v1[i] = v1[i-1] + sorted[i];
    }
    // cout <<el;
    // fr(i, 0, n, 1)
    // {
    //     cout << v1[i] << " ";
    // }
    // cout << el;
    int q;
    cin >> q;
    while(q--)
    {
        int s, i, j; cin >> s >> i >> j;
        i--, j--;
        if(s == 1)
        {
            if (i != 0)
                cout << v[j] - v[i - 1] << el;
            else
                cout << v[j] << el;
        }
        else
        {
            if (i != 0)
                cout << v1[j] - v1[i - 1] << el;
            else
                cout << v1[j] << el;
        }
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