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
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    if(n == 2)
    {
        cout << 0;
    }
    else
    {
        int size = n - 1;
        cout << min(v[size] - v[1], v[size - 1] - v[0]) << el;
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