#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        string x;
        cin >> x;
        int i = 0, j = 0;
        int cnt = 0;
        int mi = INT_MAX;
        while (j < n)
        {
            if (x[j] == 'W')
                cnt++;
            if (j >= k - 1)
            {
                mi = min(mi, cnt);
                if (x[i] == 'W')
                    cnt--;
                i++;
            }
            j++;
        }

        cout << mi << endl;
    }
    return 0;
}