#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            mp[val]++;
        }
        bool flag = false;
        int val;
        for(auto& ap : mp)
        {
            if(ap.second >= 3)
            {
                val = ap.first;
                flag = true;
                break;
            }
        }

        if(flag) cout << val << endl;
        else cout << -1 << endl;

    }
    return 0;
}