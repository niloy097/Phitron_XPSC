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
    int n;
    cin >> n;
    int arr[n];
    fr(i , 0, n, 1)
    {
        cin >> arr[i];
    }
    int ans = 0;
    fr(i, 1, n-1, 1)
    {
        if(arr[i] == 0 && arr[i-1] == 1 && arr[i+1] == 1)
        {
            ans++;
            arr[i+1] = 0;
        }
    }
    cout << ans << endl;
}
signed main()
{
    ROCKET

    int t = 1;
    // cin >> t;
    while(t--) solve();
    
    return 0;
}