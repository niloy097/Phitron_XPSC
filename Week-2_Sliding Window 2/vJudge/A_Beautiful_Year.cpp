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
    map<int, int> mp;
    for(int j = n+1;; j++)
    {
        int i = j;
        vector<int> year;
        while(i)
        {
            int rem = i % 10; //2012
            year.push_back(rem); // 2
            mp[rem]++; //[2] = 1, 
            i /= 10;
        }
        bool flag = true;
        for(auto& x: mp)
        {
            if(x.second != 1)
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            reverse(year.begin(), year.end());
            for(auto& x : year) cout << x;
            cout << el;
            break;
        }

        mp.clear();
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