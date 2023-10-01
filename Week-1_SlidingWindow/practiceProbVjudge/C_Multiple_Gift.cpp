#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int x, y;
    cin >> x >> y;
    long long int cnt = 0;
    while(x <= y)
    {
        cnt++;
        x *= 2;
    }
    cout << cnt << endl;
    return 0;
}