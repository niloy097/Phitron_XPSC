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
    string x;
    cin >> x;
    string ans;
    int cnt1 = 0;
    int cnt2 = 0;

    fr(i, 0, n-1, 1)
    {
        cnt2 = 0;
        fr(j, 0, n-1, 1)
        {
            if(x[i] == x[j] and x[i+1] == x[j+1])
            {
                cnt2++;
                if(cnt1 < cnt2) //max
                {
                    cnt1 = cnt2;
                    ans = string(1, x[i]) + string(1,x[i+1]);
                }
            }
        }
    }
    cout << ans << el;
}
signed main()
{
    ROCKET

    int t = 1;
    // cin >> t;
    while(t--) solve();
    
    return 0;
}