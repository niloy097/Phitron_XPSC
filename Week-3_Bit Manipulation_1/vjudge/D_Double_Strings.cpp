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
void solve()
{
    int n; cin >> n;
    map<string, int> mp;
    vtr<string> v;
    fr(i, 0, n, 1)
    {
        string x; cin >> x;
        v.pb(x);
        mp[x]++;
    }
    vtr<char>ans;
    fr(i, 0, v.size(), 1)
    {
        bool flag = false;
        string x = v[i];
        string sp1 = "", sp2 = "";
        fr(j, 0, x.size(), 1)
        {
            fr(a, 0, j, 1)
            {
                sp1 += x[a];
            }
            fr(b, j, x.size(), 1)
            {
                sp2 += x[b];
            }
            if(mp[sp1] > 0 && mp[sp2] > 0)
            {
                flag = true;
                break;
            }
            else
            {
                sp1.clear(), sp2.clear();
            }
        }
        if(flag) ans.push_back('1');
        else ans.pb('0');
    }

    efr(v, ans) cout << v;
    cout << el;
}
signed main()
{
    ROCKET

    int t = 1;
    cin >> t;
    while(t--) solve();
    
    return 0;
}