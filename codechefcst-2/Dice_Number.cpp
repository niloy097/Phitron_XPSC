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
   vtr<int> v(3);
   vtr<int> v1(3);
   for(int i = 0; i < 3; i++)
   {
        cin >> v[i];
   }
   for(int i = 0; i < 3; i++)
   {
        cin >> v1[i];
   }
   sort(v.begin(), v.end(), greater<int>());
   sort(v1.begin(), v1.end(), greater<int>());
//    for(int i = 0; i < 3; i++)
//    {
//         cout << v[i] << " ";
//    }
//    cout << el;
//    for(int i = 0; i < 3; i++)
//    {
//         cout << v1[i] << " ";
//    }
//    cout << el;
   bool flag = false;
   fr(i, 0, 3, 1)
   {
        if(v1[i] == v[i])
        {
            continue;
        }
        else if(v[i] > v1[i])
        {
            cout << "Alice" << el;
            flag = true;
            break;
        }
        else
        {
            cout << "Bob" << el;
            flag = true;
            break;
        }
   }

   if(flag == false) cout << "Tie" << el;
   
}
signed main()
{
    ROCKET

    int t = 1;
    cin >> t;
    while(t--) solve();
    
    return 0;
}