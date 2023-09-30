#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if((x*x + y*y) < z * z) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}