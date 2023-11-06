#include<bits/stdc++.h>
using namespace std;
bool com(pair<char, int> a, pair<char, int> b)
{
    return (a.second > b.second);
}
int main()
{
    vector<pair<char, int>> v = {{'a',10}, {'b', 3}, {'c', 90}};
    sort(v.begin(), v.end(), com);
    for(pair<int, int> val : v)
    {
        cout << (char)val.first << " " << val.second << endl;
    }
}