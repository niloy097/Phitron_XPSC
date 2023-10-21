#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin>> v[i];

    for(int k = 1; k < (1 << n); k++)
    {
        for(int i = 0; i < n; i++)
        {
            if(k & (1 << i))
            {
                cout << v[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}