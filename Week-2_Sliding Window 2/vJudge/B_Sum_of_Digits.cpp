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
    string x;
    cin >> x;
    int cnt = 0;
    while(x.size() > 1)
    {
        cnt++;
        ll sum = 0;
        fr(i, 0, x.size(), 1)
        {
            sum += x[i] - '0';
        }
        x = to_string(sum);
    }
    cout << cnt << el;
}
signed main()
{
    ROCKET

    int t = 1;
    // cin >> t;
    while(t--) solve();
    
    return 0;
}