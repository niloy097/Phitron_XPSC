#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int r1 = (a + (a-1));
    int r2 = (b + (b-1));
    int r3 = (a + b);
    cout << max(r1, max(r2, r3)) << endl;
    return 0;
}