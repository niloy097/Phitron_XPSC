#include<bits/stdc++.h>
using namespace std;
string ans(int a, int b)
{
    if((a + b + (a * b)) == 111) return "Yes";
    else return "No";
}
int main()
{
    int a, b;
    cin >>a >> b;
    cout << ans(a, b) << endl;
    return 0;
}