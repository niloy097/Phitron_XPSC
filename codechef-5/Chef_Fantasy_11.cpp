#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll nCr(ll n)
{
    ll n_fac = 1, r_fac = 2;
    for(ll i = 1; i <= n; i++) n_fac *= i;
    ll x = 1;
    for(ll i = 1; i <= (n - 2); i++) x *= i;
    ll ans = (n_fac)/((r_fac)*x);
    return (2 * ans);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n; cin >> n;
        cout << 1ll*nCr(n) << endl;
    }
    return 0;
}