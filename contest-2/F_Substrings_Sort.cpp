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
bool isSubStr(string s,string mainStr) 
{
    int ans = 0; 
    fr(i , 0, mainStr.length(), 1)
    {
        if(mainStr[i] == s[0])
        {
            ans = 0;
            for(int j = 0 ; j < s.length() and i + j < mainStr.length(); j++)
            {
                if (s[j]==mainStr[i+j])
                {
                    ans++; 
                }
                else
                    break;
            }
        }
        if(ans==s.length()) return true;   
    }
    return false; 
}
void solve()
{
    int n; cin >> n;
    vector<pair<int ,string>> v(n);
    fr(i, 0, n, 1)
    {
        cin >> v[i].second;
        v[i].first = v[i].second.length();
    }
    sort(v.begin(), v.end());
    string val = v[n-1].second;

    bool flag = true; 
    fr(i, 0, n-1, 1)
    {
        if(!isSubStr(v[i].second,v[i+1].second))
        {
            flag = false;
            break;
        }
    }
    if(flag)
    {
        cout << "YES" << el;
        for (int i =0 ;i<n ;i++) cout << v[i].second << el;
    }
    else
        cout << "NO" << el;
}
signed main()
{
    ROCKET

    int t = 1;
    // cin >> t;
    while(t--) solve();
    
    return 0;
}