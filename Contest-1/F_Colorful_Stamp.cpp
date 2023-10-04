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
        string x;
        cin >> x;
        bool flag = true;
        for(int i = 0; i < n; i++)
        {
            if(x[i] != 'W')
            {
                int b = 0, r = 0;
                while(i < n && x[i] != 'W')
                {
                    if(x[i] == 'B') b++;
                    else r++;
                    i++;
                }
                if(b == 0 || r == 0)
                {
                    flag = false;
                    break;
                }
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl; 
    }
    return 0;
}