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
void solve()
{
    int n; cin >> n;
    int mat[n][n-1];
    fr(i, 0, n, 1 )
    {
        fr(j, 0, n - 1 , 1)
        {
            cin >> mat[i][j];
        }
    }
    map<int, int> mp;
    vtr<int> ans;
    fr(i, 0, n, 1)
    {
        mp[mat[i][n-2]]++;
    }
    int unique, notnq;
    efr(x, mp)
    {
        if(x.second == 1)
        {
            unique = x.first;
        }
        else notnq = x.first;
    }
    int x;
    fr(i, 0, n, 1)
    {
        if(mat[i][n-2] == unique) 
        {
            x = i;
            break;
        }
    }
    rfr(i, n - 2, 0, 1)
    {
        ans.pb(mat[x][i]);
    }
    reverse(all(ans));
    ans.pb(notnq);
    efr(x, ans) cout << x << " ";
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