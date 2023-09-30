#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    string str, x = "ABC";
    cin >> str;
    int cnt = 0;
    while(str.find(x) != -1)
    {
        str.replace(str.find(x), x.size(), "$");
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}