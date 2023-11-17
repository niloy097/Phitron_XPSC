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
void solve()
{
    int n;
    cin >> n;
    int nn = n * (n - 1) / 2;
    vector<int> v(nn);
    map<int, int> mp;
    for (int i = 0; i < nn; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    sort(all(v));
    vector<int> ans;
    for (auto x : mp)
    {
        int a = x.first;
        int fq = x.second;
        int s = n - 1 - ans.size();
        int y = s;
        ans.pb(a);
        while (fq != s and ans.size() < n)
        {
            ans.pb(a);
            s += (y - 1);
            y = y - 1;
        }
    }
    while (ans.size() < n)
    {
        ans.pb(ans.back());
    }
    for (int x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
}
signed main()
{
    ROCKET

    int t = 1;
    cin >> t;
    while(t--) solve();
    
    return 0;
}