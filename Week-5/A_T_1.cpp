#include<bits/stdc++.h>
using namespace std;

int main()
{
    int case1 = 1;
    while(true)
    {
        int n, q;
        cin >> n >> q; if(n == 0 and q == 0) break;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        // for(int i = 0; i < n; i++) cout << v[i] << " ";
        // cout << endl;
        cout << "CASE# " << case1 << ":"<< endl;
        while(q--)
        {
            int key; cin >> key;
            int ans = -1;
            int l = 0, r = n - 1;
            while(l <= r)
            {
                int mid = (l + r) / 2;
                if(key == v[mid])
                {
                    ans = mid;
                    r = mid - 1;
                }
                else if(key < v[mid]) r = mid - 1;
                else l = mid + 1;
            }
            if(ans != -1) cout << key << " found at " << ans+1 << endl;
            else cout << key << " not found" << endl;
        }
        case1++;
    }
    return 0;
}