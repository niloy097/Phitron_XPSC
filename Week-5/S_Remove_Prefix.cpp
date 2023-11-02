#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        int cnt = 0;
        for(int i = 0; i < n; i++) cin >> v[i];
        for(int i = n - 1; i >= 0; i--)
        {
            if(mp.find(v[i]) == mp.end())
            {
                cnt++;
                mp[v[i]]++;
            }
            else break;
        }
        cout << n - cnt << endl;
    }
    return 0;
}