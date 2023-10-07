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
const int N = 1e9 + 7;
map<int, int> xHash;
void solve()
{
    int x;
    cin >> x;
    xHash[x]++;
}
signed main()
{
    ROCKET

    int t = 1;
    cin >> t;
    while(t--) solve();
    efr(pr, xHash)
    {
        if(pr.second == 1)
        {
            cout << pr.first <<el;
            break;
        }
    }
    
    return 0;
}