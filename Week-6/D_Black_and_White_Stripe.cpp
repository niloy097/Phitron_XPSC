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
bool allWhite(string& x, char c)
{
    for(int i = 0; i < x.size(); i++)
    {
        if(x[i] != c) return false;
    }
    return true;
}
bool haveConseq(string& x, int k)
{
    int cnt = 0;
    for(int i = 0; i < x.size(); i++)
    {
        if(x[i] == 'B')
        {
            cnt++;
        }
        if(cnt == k) return true;
        if(x[i] == 'W')
        {
            cnt = 0;
        }
    }
}
void solve()
{
    int n, k; cin >> n >> k;
    string x; cin >> x;
    list<char> li;
    int i = 0, j = 0;
    int mn = 0;
    int cnt = 0;
    if(allWhite(x, 'W')) cout << k << el;
    else
    {
        while (j < n)
        {
            li.push_back(x[j]);
            if (x[j] == 'W')
            {
                cnt++;
                // cout << "j: " << j << " c1: " << cnt << el;
            }
            if (j >= k - 1)
            {
                mn = min(mn, cnt);
                if (x[i] == 'W' && j  > n - 1)
                    cnt--;
                // cout << "j: " << j << " c2: " << cnt << el;
                i++;
            }
            j++;
        }
        cout << cnt << el;
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