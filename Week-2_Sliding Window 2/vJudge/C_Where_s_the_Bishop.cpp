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
    char cb[9][9];
    for(int i = 1; i < 9; i++)
    {
        for(int j = 1; j < 9; j++)
        {
            cin >> cb[i][j];
        }
    }
    int x, y;
    for(int i = 2; i < 8; i++)
    {
        for(int j = 2; j < 8; j++)
        {
            if(cb[i][j] == '#')
            {
                if(cb[i-1][j+1] == '#' && cb[i-1][j-1] == '#'
                   && cb[i+1][j-1] == '#' && cb[i+1][j+1] == '#')
                   {
                        x = i, y = j;
                        break;
                   }
            }
        }
    }
    cout << x << " " << y << el;
}
signed main()
{
    ROCKET

    int t = 1;
    cin >> t;
    while(t--) solve();
    
    return 0;
}