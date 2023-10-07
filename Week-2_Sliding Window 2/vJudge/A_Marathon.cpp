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
    vtr<int> v(4);
    int x; cin >> x; v[0] = x;
    int cnt = 0;
    fr(i, 1, 4, 1)
    {
        cin >> v[i];
        if(v[i] > v[0]) cnt++;
    }
    cout << cnt << el;
}
signed main()
{
    ROCKET

    int t = 1;
    cin >> t;
    while(t--) solve();
    
    return 0;
}