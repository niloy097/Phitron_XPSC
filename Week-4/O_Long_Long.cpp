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
        vector <int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum = sum + abs(v[i]);
        }
        bool isNegSeg = false;
        int operation = 0;
        for(int i = 0; i <= n; i++)
        {
            if(isNegSeg)
            {
                if(i == n || v[i] > 0)
                {
                    operation++;
                    isNegSeg = false;
                }
            }
            if(v[i] < 0)
            {
                isNegSeg = true;
            }
        }
        cout << sum << " " << operation << endl;
    }
    return 0;
}