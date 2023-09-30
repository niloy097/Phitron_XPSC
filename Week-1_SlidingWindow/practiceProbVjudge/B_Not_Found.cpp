#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;
    int cnt[26] = {0};
    for (int i = 0; i < x.size(); i++)
    {
        int val = x[i] - 'a';
        cnt[val]++;
    }
    bool flag = false;
    char ch;
    for (int i = 0; i < 26; i++)
    {
        if(cnt[i] == 0) 
        {
            ch = char(i + 97);
            flag = true;
            break;
        }

    }
    if(flag) cout << ch << endl;
    else cout << "None" << endl;
    return 0;
}