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
vtr<int> palindroms;
void getPal()
{
    int mx = 1 << 15; // pow(2, 15)
    fr(i, 0, mx, 1)
    {
        string x = to_string(i);
        if(isPalindrom(x))
        {
            int y = stoi(x);
            palindroms.pb(y);
        }
    }
}
void solve()
{
    int n; cin >> n;
    vtr<int> v(n);
    unordered_map<int, int> mp;
    fr(i, 0, n, 1)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    ll ans = 0;
    fr(i, 0, n, 1)
    {
        fr(j, 0, palindroms.size(), 1)
        {
            if((v[i] ^ palindroms[j]) <= v[i]) continue;
            //if a > b then a ^ b >= a
            if(mp.find(v[i] ^ palindroms[j]) != mp.end())
            {
                ans += mp[v[i] ^ palindroms[j]];
            }
        }
    }
    efr(it, mp)
    {
        ans += ((ll)it.second * (it.second + 1)) / 2;
    }
    cout << ans << el;

}
signed main()
{
    ROCKET
    getPal();
    int t = 1;
    cin >> t;
    while(t--) solve();
    
    return 0;
}