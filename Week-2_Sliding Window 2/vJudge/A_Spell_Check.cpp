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
    string x, idol = "Timur";
    cin >> x;
    vtr<int> iHash(52, 0);
    vtr<int> xHash(52, 0);
    fr(i, 0, idol.size(), 1)
    {
        if(idol[i] >= 'A' && idol[i] <= 'Z')
            iHash[idol[i] - 'A']++;
        else
            iHash[idol[i] - 'a' + 26]++;
    }
    fr(i, 0, x.size(), 1)
    {
        if(x[i] >= 'A' && x[i] <= 'Z')
            xHash[x[i] - 'A']++;
        else
            xHash[x[i] - 'a' + 26]++;
    }
    if(iHash == xHash) cout << "YES" << endl;
    else cout << "NO" << el;
}
signed main()
{
    ROCKET

    int t = 1;
    cin >> t;
    while(t--) solve();
    
    return 0;
}