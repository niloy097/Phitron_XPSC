#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        string x;
        cin >> x;
        int op = 0;
        for(int i = 0; i < n; i++)
        {
            if(x[i] == 'B')
            {
                op++;
                i += m - 1;
            }
        }
        cout << op << endl;
    }
    return 0;
}