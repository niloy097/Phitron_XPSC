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
    char ch; cin >> ch;
    string x;
    cin >> x;
    if(ch == 'g') cout << 0 << el;
    else
    {
        string tmpStr = x + x;
        vtr<int> idx;
        fr(i, 0, tmpStr.size(), 1)
        {
            if (tmpStr[i] == 'g')
                idx.pb(i);
        }
        int mx = 0;
        int mxidx = 0;
        fr(i, 0, x.size(), 1)
        {
            if (x[i] == ch)
            {
                fr(j, mxidx, idx.size(), 1)
                {
                    if (idx[j] > i)
                    {
                        mx = max(mx, (idx[j] - i));
                        mxidx = j;
                        break;
                    }
                }
            }
        }

        cout << mx << el;
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