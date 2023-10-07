#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}
int longestSubstrDistinctChars (string s)
{
    int n = s.size();
    map<char,int> m;
    int mx = 0;
    int i = 0, j = 0;
    while(j < n)
    {
        m[s[j]]++;
        
        if(m.size() == j -i + 1)
        {
            mx = max(mx, j - i + 1);
        }
        else if(m.size() < j -i + 1)
        {
            while(m.size() < j- i + 1)
            {
               m[s[i]]--;
               
               if(m[s[i]] == 0)
               {
                   m.erase(s[i]);
               }
               
               i++;
            }
        }
        j++;
    }
    return mx;
}