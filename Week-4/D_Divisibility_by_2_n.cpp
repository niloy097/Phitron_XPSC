//Not solved

#include<bits/stdc++.h>
#define ROCKET ios :: sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define fr(x, s, e, b) for(ll x = s; x < e; x = x + b)
#define rfr(x, s, e, b) for(int x = s; x >= e; x = x - b)
#define efr(val, where) for(auto& val : where)
#define all(x) x.begin(), x.end()
#define el '\n'
#define vtr vector
#define pb push_back
#define MOD 1e9 + 7
#define imax INT_MAX
#define imin INT_MIN
#define pr pair<int, int>
using namespace std;
bool isPalindrom(string x)
{
    int i = 0;
    int j = x.size() -1;
    while(i < j)
    {
        if(x[i] != x[j]) return false;
        i++;
        j--;
    }
    return true;
}
bool isPrime(int n)
{
    if(n <= 1) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(int i = 3; i * i <= n; i += 2)
    {
        if(n % i == 0) return false;
    }
    return true;
}
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
    ll n; cin >> n;
    ll res = 0;
    vtr<ll> v;
    
    fr(i, 1, n+1, 1)
    {
        ll x; cin >> x;
        while(x % 2 == 0)
        {
            res++;
            x /= 2;
        }

        ll cur = i;
        ll tmp = 0;
        while(cur % 2 == 0)
        {
            tmp++;
            cur /= 2;
        }
        v.pb(tmp);
    }

    sort(v.rbegin(), v.rend());
    
    if(res >= n) cout << 0 << el;
    else
    {
        ll ans = 0;
        fr(i, 0, v.size(), 1)
        {
            res += v[i];
            ans++;
            if(res >= n)
            {
                cout << ans << el;
                break;
            }
        }
        if(res < n) cout << -1 << el;
    }
}
signed main()
{
    ROCKET

    int t = 1;
    cin >> t;
    while(t--) solve();
    
    return 0;
}