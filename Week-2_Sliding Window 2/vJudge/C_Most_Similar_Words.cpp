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
    int n, m;
    cin >> n >> m;
    vector<string> v;
    fr(i, 0, n, 1) 
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    int mn = INT_MAX;
    fr(i, 0, n - 1, 1)
    {
        fr(j, i + 1, n, 1)
        {
            int sum = 0;
            fr(k, 0, v[i].size(), 1)
            {
                sum += abs(v[i][k] - v[j][k]);
            }
            mn = min(mn, sum);
        }
    }
    cout << mn << el;
}
signed main()
{
    ROCKET

    int t = 1;
    cin >> t;
    while(t--) solve();
    
    return 0;
}