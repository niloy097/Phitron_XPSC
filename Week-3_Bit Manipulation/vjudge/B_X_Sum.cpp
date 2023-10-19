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
    int n, m;
    cin >> n >> m;
    int grid[n][m];
    fr(i, 0, n, 1)
    {
        fr(j, 0, m, 1)
        {
            cin >> grid[i][j];
        }
    }
    vtr<int> aSum;
    fr(i, 0, n, 1)
    {
        fr(j, 0, m, 1)
        {
            int target = grid[i][j];
            int sum = target;
            //upRight
            for(int k = i - 1, l = j + 1; k >= 0 && l < m; k--, l++)
            {
                sum += grid[k][l];
            }

            //upLeft
            for(int k = i-1, l = j-1; k >= 0 && l >= 0; k--, l--)
            {
                sum += grid[k][l];
            }

            //DownLeft
            for(int k = i+1, l = j-1; k < n && l >= 0; k++, l--)
            {
                sum += grid[k][l];
            }

            //DownRight
            for(int k = i+1, l = j+1; k < n && l < m; k++, l++)
            {
                sum += grid[k][l];
            }

            aSum.push_back(sum);
        }
    }

    int maxSum = imin;
    efr(val, aSum) maxSum = max(maxSum, val);
    cout << maxSum << el;
}
signed main()
{
    ROCKET

    int t = 1;
    cin >> t;
    while(t--) solve();
    
    return 0;
}