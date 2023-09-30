#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    double x = (double)((a - b) * 100) / a * 1.0;
    cout << setprecision(20) << x << endl;
    return 0;
}