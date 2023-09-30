#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a > b) cout << -1 << endl;
    else
    {
        bool flag = false;
        int mul;
        for(int i = a; i <= b; i++)
        {
            if(i % c == 0)
            {
                mul = i;
                flag = true;
                break;
            }
        }
        if(flag) cout << mul << endl;
        else cout << -1 << endl;

    }
    return 0;
}