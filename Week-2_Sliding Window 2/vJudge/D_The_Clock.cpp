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
bool isPalindrome(string x)
{
    int i = 0, j = 4;
    while(i  <  j)
    {
        if(x[i] != x[j]) return false;
        i++;
        j--;
    }
    return true;
}
void solve()
{
    string s; cin >> s;
    int x; cin >> x;

    int h = x / 60, m = x % 60;

    int ans = 0;

    map<string, bool> visited;

    while(!visited[s])
    {
        ans += (isPalindrome(s));
        visited[s] = true;
        int hh = ((s[0] - '0') * 10) + (s[1] - '0');
        int mm = ((s[3] - '0') * 10) + (s[4] - '0');

        mm += m;
        if(mm > 59)
        {
            hh++;
        }
        mm %= 60;
        hh += h;
        hh %= 24;

        s[0] = ('0' + (hh / 10));
        s[1] = ('0' + (hh % 10));

        s[3] = ('0' + (mm / 10));
        s[4] = ('0' + (mm % 10));

    }
    cout << ans << el;
}
signed main()
{
    ROCKET

    int t = 1;
    cin >> t;
    while(t--) solve();
    
    return 0;
}