#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        int q; cin >> q;
        while(q--)
        {
            int key; cin >> key;
            auto it1 = lower_bound(v.begin(), v.end(), key);
            int idx1 = it1 - v.begin();
            auto it2 = upper_bound(v.begin(), v.end(), key);
            int idx2 = it2 - v.begin();
            // cout << idx1 << " " << idx2 << endl;
            if(idx1 == 0) cout << v[idx1] << " ";
            else cout << v[idx1-1] << " ";
            if(idx2 <= v.size()-1) cout << v[idx2] << endl;
            else cout << 'X' << endl;
        }
    }
    return 0;
}