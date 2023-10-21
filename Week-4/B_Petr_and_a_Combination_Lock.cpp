#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin>> v[i];
    bool flag = false;
    for(int k = 1; k < (1 << n); k++)
    {
        long long int sum = 0;
        for(int i = 0; i < n; i++)
        {
            if(k & (1 << i))
            {
                sum += v[i];
            }
            else sum -= v[i];
        }
        
        if(sum % 360 == 0)
        {
            flag = true;
            break;
        }
    }

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}