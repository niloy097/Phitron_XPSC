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
const int N = (2 * 1e5) + 7;
void solve()
{
    int n;
    cin >> n;
    vtr<int> v(n);
    fr(i, 0, n, 1) cin >> v[i];
    vtr<int> freq(N, 0);
    int val = -1;
    fr(i, 0, n, 1)
    {
        freq[v[i]]++;
        if(freq[v[i]] == 3)
        {
            val = v[i];
            break;
        }
    }
    cout  << val << el;
}
signed main()
{
    ROCKET

    int t = 1;
    cin >> t;
    while(t--) solve();
    
    return 0;
}