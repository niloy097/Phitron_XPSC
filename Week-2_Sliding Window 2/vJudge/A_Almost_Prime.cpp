#include<bits/stdc++.h>
#define ROCKET ios :: sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define fr(x, s, e, b) for(int x = s; x < e; x = x + b)
#define efr(val, where) for(auto& val : where)
#define el '\n'
#define co cout
#define ci cin
#define vtr vector
#define pb push_back
using namespace std;
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
void solve()
{
    int n;
    cin >> n;
    int mainCnt = 0;
    for(int i = 1; i <= n; i++) // O(n)
    {
        set<int> v;
        for(int j = 1; j * j <= i; j++) // will find devisors
        // O(log n)
        {
            if(i % j == 0)
            {
                v.insert(j);
                v.insert(i / j);
            }
        }
        int cnt = 0;
        for(auto& x : v) // O(n)
        {
            if(isPrime(x)) cnt++; // O(log n)
        }
        cout << el;
        if(cnt == 2)
        {
            mainCnt++;
        }
    }
    cout << mainCnt << el;
    
}
signed main()
{
    ROCKET

    int t = 1;
    // cin >> t;
    while(t--) solve();
    
    return 0;
}