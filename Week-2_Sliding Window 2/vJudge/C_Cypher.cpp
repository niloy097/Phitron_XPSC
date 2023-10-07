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
    vtr<int> v(n);
    fr(i, 0, n, 1) cin >> v[i];
    int j = 0;
    while(n--)
    {
        int x;
        cin >> x;
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'D')
            {
                v[j]++;
                if(v[j] > 9)
                {
                    v[j] %= 10;
                }
            }
            else
            {
                v[j]--;
                if(v[j] < 0)
                {
                    v[j] = 10 + v[j];
                }
            }
        }
        j++;
    }

    efr(val, v) cout << val << " ";
    cout << el;

}
signed main()
{
    ROCKET

    int t = 1;
    cin >> t;
    while(t--) solve();
    
    return 0;
}