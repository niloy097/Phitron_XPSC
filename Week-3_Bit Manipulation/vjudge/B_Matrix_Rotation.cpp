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
bool order(int a, int b, int c, int d)
{
    return (a < b && c < d && a < c && b < d);
}
void solve()
{
    int a , b, c , d;
    cin >> a >> b >> c >> d;
    if(a < b && b < c && c < d) cout << "YES" << el;
    else
    {
        int p = c, q = a, r = d, s = b;
        // cout << p << " " << q << el;
        // cout << r << " " << s << el;
        // cout << el;
        // swap(p, r);
        // swap(q, s);
        // swap(q, r);
        // cout << p << " " << q << el;
        // cout << r << " " << s << el;
        // cout << el;
        bool flag = false;
        int x = 4;
        while (x--)
        {
            if(order(p, q, r, s))
            {
                flag = true;
                break;
            }
            swap(p, r);
            swap(q, s);
            swap(q, r);
        }
        if(flag) cout << "YES" << el;
        else cout << "NO" << el;
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