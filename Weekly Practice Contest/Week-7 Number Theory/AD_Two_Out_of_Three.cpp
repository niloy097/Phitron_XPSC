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
    if(b == 0) return a;
    return gcd(b, a % b);
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
const int N = 1e6 + 7;
ll a[N], b[N];
void solve()
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= 100; i++)
        b[i] = 0;
    map<ll, ll> mp;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    ll ans = 0, f, g;
    for (auto i : mp)
    {
        if (i.second >= 2)
        {
            ans++;
            if (ans == 1)
                f = i.first;
            else if (ans == 2)
                g = i.first;
        }
    }
    if (ans < 2)
        cout << "-1" << endl;
    else
    {

        ll cnt1 = 0, cnt2 = 0;
        for (ll i = 1; i <= n; i++)
        {
            b[i] = 1;
            if (a[i] == f)
                cnt1++;
            if (a[i] == g)
                cnt2++;
            if (cnt1 >= 2 && a[i] == f)
                b[i] = 2;
            if (cnt2 >= 2 && a[i] == g)
                b[i] = 3;
            cout << b[i] << " ";
        }
        cout << endl;
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