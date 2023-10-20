#include<bits/stdc++.h>
#define ROCKET ios :: sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define fr(x, s, e, b) for(int x = s; x < e; x = x + b)
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
    ll rem = 1;
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
ll lmc(ll a, ll b, ll g)
{
    return (a * b) / g;
}
void solve()
{
    ll a, b, k; cin >> a >> b >> k;
    ll p = a, q = b;
    ll r = a, s = b;
    ll o1 = k;
    while(o1--)
    {
        ll x = gcd(p, q);
        p > q ? p = x : q = x;
        ll y = lmc(p, q, x);
        p > q ? p = y : q = y;
    }
    // cout << p + q << el;
    ll ans1 = p + q;
    ll o2 = k;
    while(o2--)
    {
        ll x = gcd(r, s);
        r > s ? r = x : s = x;
        ll y = lmc(r, s, x);
        r > s ? r = y : s = y;
    }
    ll ans2 = r + s;

    cout << max(ans1, ans2) << el;
}
signed main()
{
    ROCKET

    int t = 1;
    cin >> t;
    while(t--) solve();
    
    return 0;
}