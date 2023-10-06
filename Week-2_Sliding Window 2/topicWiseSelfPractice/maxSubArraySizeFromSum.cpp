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
    fr(i, 0, n, 1) cin >> arr[i];
    int s; cin >> s;
    int i = 0, j = 0;
    int sum = 0;
    int mx = INT_MIN;
    while(j < n)
    {
        sum += arr[j];
        if(sum > s)
        {
            while(sum > s)
            {
                sum -= arr[i];
                i++;
            }
        }
        if(sum == s)
        {
            int winSize = j - i + 1;
            // cout << winSize << " ";
            mx = max(mx, winSize);
            // cout << j - i + 1 << " ";
        }
        j++;
    }
    cout << mx << el;
}
signed main()
{
    ROCKET

    int t = 1;
    // cin >> t;
    while(t--) solve();
    
    return 0;
}