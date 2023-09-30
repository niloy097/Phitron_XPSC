#include<bits/stdc++.h>
using namespace std;
int main()
 
{
 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char arr[100];
        cin >> arr;
        int cnt[26] = {0};
        int sum = 0;
        
        for(int i = 0; i < n; i++)
        {
            int val = arr[i] - 'A';
            if(cnt[val] == 0)
            {
                cnt[val]++;
                sum+=2;
            }
            else
            {
                sum+=1;
            }
            
        }
        cout << sum << endl;
    }
    return 0;
}    