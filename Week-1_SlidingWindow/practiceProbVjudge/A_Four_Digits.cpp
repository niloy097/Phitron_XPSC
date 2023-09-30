#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;
    int size = x.size();
    string ans = "";
    for(int i = 0; i < 4 - size; i++)
    {
        ans.push_back('0');
    }
    ans += x;
    cout << ans << endl;
    return 0;
}