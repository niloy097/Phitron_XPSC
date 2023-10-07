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
    string x, ido = "YES";
    cin >> x;
    fr(i, 0, x.size(), 1)
    {
        if(x[i] >= 'a' && x[i] <= 'z')
        {
            x[i] = x[i] - 32;
        }
    }
    if(x == ido) cout  << ido << el;
    else cout << "NO" << el;
}
signed main()
{
    ROCKET

    int t = 1;
    cin >> t;
    while(t--) solve();
    
    return 0;
}