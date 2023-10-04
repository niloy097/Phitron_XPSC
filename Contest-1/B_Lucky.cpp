#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string x;
        cin >> x;
        int a = 0, b = 0;
        for(int i = 0; i < 3; i++)
        {
           int val = x[i] - '0';
           a += val;
        }
        for(int i = 3; i < x.size(); i++)
        {
            int val = x[i] - '0';
            b += val;
        }
        // cout << a << " " << b << endl;
        if(a == b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}