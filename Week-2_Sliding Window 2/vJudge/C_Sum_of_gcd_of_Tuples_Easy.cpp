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
ll gcd(ll a, ll b)
{
    if(a < b) swap(a, b);
    ll ans;
    int rem = 1;
    while(true)
    {
        rem = a % b;
        if(rem == 0) 
        {
            ans = b;
            break;
        }
        a = b;
        b = rem;
    }
    return ans;
}
void solve()
{
    int n;
    cin >> n;
    ll ans = 0;
    fr(i, 1, n + 1, 1)
    {
        fr(j, 1, n + 1, 1)
        {
            fr(k, 1, n + 1, 1)
            {
                ans += gcd(i, gcd(j, k));
            }
        }
    }
    cout << ans << el;
}
signed main()
{
    ROCKET

    int t = 1;
    // cin >> t;
    while(t--) solve();
    
    return 0;
}