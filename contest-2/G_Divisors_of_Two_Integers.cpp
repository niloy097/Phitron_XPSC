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
void solve()
{
    int n, x; 
    cin >> n;
	vtr<int> v(n);
	fr(i, 0, n, 1) cin >> v[i];

	sort(v.begin(), v.end());

	int a = v[n - 1];
    int b;
    
	for(int i = n - 1; i > 0; i--)
    {
		if(v[i] == v[i - 1])
        {
			b = v[i];
			break;
		}
		else if(a % v[i] != 0)
        {
			b = v[i];
			break;
		}
	}
	cout << a <<" "<< b << el;
}
signed main()
{
    ROCKET

    int t = 1;
    // cin >> t;
    while(t--) solve();
    
    return 0;
}