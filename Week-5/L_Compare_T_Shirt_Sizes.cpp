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
typedef string str;
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
    str a, b; cin >> a >> b;
    if(a == b) cout << '=' << el;
    else
    {
        char key_a = a[a.size() - 1], key_b = b[b.size() - 1];
        int x_a = 0, x_b = 0;
        if(key_a == key_b)
        {
            fr(i, 0, a.size() - 1 , 1)
            {
                if(a[i] == 'X') x_a++;
            }
            fr(i, 0, b.size() - 1 , 1)
            {
                if(b[i] == 'X') x_b++;
            }
            if(key_a == 'L')
            {
                if (x_a > x_b)
                    cout << '>' << el;
                else
                    cout << '<' << el;
            }
            else 
            {
                if(x_a > x_b)
                    cout << '<' << el;
                else
                    cout << '>' << el;
            }
        }
        else
        {
            if(key_a == 'L' && (key_b == 'M' || key_b == 'S'))
            {
                cout << '>' << el;
            }
            else if(key_b == 'L' && (key_a == 'M' || key_a == 'S'))
            {
                cout << '<' << el;
            }
            else if(key_a == 'M' && key_b == 'S')
            {
                cout << '>' << el;
            }
            else if(key_a == 'S' && key_b == 'M') cout << '<' << el;
        }

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