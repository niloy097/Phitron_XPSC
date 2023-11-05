#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int key; cin >> key;
    int ans = -1;
    int l = 0, r = n - 1;
    while(l <= r)
    {
        int mid = l + (r - l)/2;
        if(v[mid] == key)
        {
            ans = mid;
            break;
        }
        else if(key > v[mid])
        {
            l = mid + 1;
        }
        else r = mid - 1;
    }
    cout << ans << endl;
    return 0;
}