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
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int i = 0;
        int j = n - 1;
        int sum = 0;
        while(i <= j)
        {
            int mx = max(v[i], v[j]);
            int mn = min(v[i], v[j]);
            int dif = mx - mn;
            sum = sum + dif;
            i ++;
            j --;
        }
        cout << sum << endl;
    }
 
    return 0;
}