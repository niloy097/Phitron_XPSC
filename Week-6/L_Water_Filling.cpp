#include<bits/stdc++.h>
using namespace std;
string getAns(int& a, int& b, int& c)
{
    if((a == 1 and b == 1) or
        (b == 1 and c == 1)
        or (c == 1 and a == 1)) return "Not now";
    else return "Water filling time";
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << getAns(a, b, c) << endl;
    }
    return 0;
}