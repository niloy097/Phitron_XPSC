#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    for(int i = 0; i <= a; i++)
    {
        for(int j = 0; j <= a; j++)
        {
            for(int k = 0; k <= a; k++)
            {
                int x = i + j + k;
                int y = i * j * k;
                if(x <= a && y <= b) cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}