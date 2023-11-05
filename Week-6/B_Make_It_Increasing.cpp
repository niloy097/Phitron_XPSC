#include<bits/stdc++.h>
#define ROCKET ios :: sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define fr(x, s, e, b) for(ll x = s; x < e; x = x + b)
#define rfr(x, s, e, b) for(ll x = s; x >= e; x = x - b)
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
vector<ll> primeFactors(ll n)
{
    vector<ll> factors;
    for(ll i = 2; i * i <= n; i++)
    {
        ll cnt = 0;
        while(n % i == 0)
        {
            cnt++;
            n /= i;
            factors.push_back(i);
        }
    }
    if(n > 1) factors.push_back(n);
    return factors;
}
ll digitSum(ll n)
{
    ll sum = 0;
       string num = to_string(n);
       for(int i = 0; i < num.size(); i++)
       {
           sum += (num[i] - '0');
    }
    return sum;
}
void solve()
{
    int n; cin >> n;
    vtr<int> v(n); // o(30)
    fr(i, 0, n, 1) cin >> v[i];
    // if(n == 1) cout << 0 << el;
    // // else if(n >= 2 && v[n-1] == 0) cout << -1 << el;
    // else
    // {
    //     int cnt = 0;
    //     int i = n - 1;
    //     for(int i = n - 1; i > 0; i--) // o(30)
    //     {

    //         bool ok = true;
    //         while(v[i] <= v[i - 1]) // o(30)
    //         {
    //             cnt++;
    //             v[i - 1] /= 2;
    //             if((v[i - 1] == 0) and i - 1 > 0)
    //             {
    //                 cnt = -1;
    //                 ok = false;
    //                 break;
    //             }
    //         }
    //         if (ok == false)
    //         {
    //             break;
    //         }
    //     }
    //     cout << cnt << el;
    // }
    int ans = 0;
    for(int i = n -2; i >= 0; i--)
    {
        while(v[i] != 0 and v[i] >= v[i+1])
        {
            v[i] /= 2;
            ans++;
        }
        if(v[i] >= v[i+1] or (v[i] == 0 and i > 0))
        {
            ans = -1;
            break;
        }
    }

    cout << ans << el;
}
signed main()
{
    ROCKET

    int t = 1;
    cin >> t;
    while(t--) solve();
    
    return 0;
}