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
    string s; cin >> s;
    int freq[26] = {0};
    int n = s.size();
    int k; cin >> k;
    int i = 0, j = 0;
    int unique = 0;
    while(j < n)
    {
        freq[s[j] - 'a']++;
        if(freq[s[j] - 'a'] == 1)
        {
            unique++;
        }
        while(unique > k)
        {
            freq[s[i] - 'a']--;
            if(freq[s[i] - 'a'] == 0) unique--;
            i++;
        }
        if(unique == k)
        {
            cout << j - i + 1 << " ";
        }
        j++;
    }

}
signed main()
{
    ROCKET

    int t = 1;
    // cin >> t;
    while(t--) solve();
    
    return 0;
}