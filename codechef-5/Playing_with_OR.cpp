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
bool isEven(ll n)
{
    return n % 2 == 0;
}
bool isOdd(ll n)
{
    return n % 2 != 0;
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
signed main()
{
    ROCKET

    int t = 1;
    cin >> t;
    vtr<ll> res;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        vtr<ll> v(n);
        fr(i, 0, n, 1) cin >> v[i];
        ll cnt = 0;
        fr(i, 0, (n - k) + 1, 1)
        {
            bool flag = false;
            fr(j, 0, k, 1)
            {
                if (v[i + j] % 2 == 1)
                {
                    flag = true;
                    break;
                }
            }
            if (flag) cnt++;  
        }
        res.pb(cnt);
    }
    efr(ans, res) cout << ans << el;
    return 0;
}