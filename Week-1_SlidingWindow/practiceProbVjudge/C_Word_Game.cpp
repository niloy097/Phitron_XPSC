#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        map<string, int> mp;
        map<int , vector<string>> mvp;
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < n; j++)
            {
                string x;
                cin >> x;
                mvp[i].push_back(x);
                mp[x]++;
            }
        }

        for(int i = 0; i < 3; i++)
        {
            int pt = 0;
            for(auto& word : mvp[i])
            {
                if(mp[word] == 1)
                {
                    pt += 3;
                }
                if(mp[word] == 2)
                {
                    pt += 1;
                }
            }
            cout << pt << " ";
        }
        cout << endl;
    }
    return 0;
}