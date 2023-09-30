#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >>c;
    bool flag = false;
    for(int i = 0; i <= c; i++)
    {
        for(int j = 0; j <= c; j++)
        {
            int sum = (a * i) + (b * j);
            if(sum == c)
            {
                flag = true; break;
            }

        }
    }

    flag ? cout << "Yes" << endl : cout << "No" << endl;
    return 0;
}