//Not Solved
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
        int arr[n+1];
        arr[0] = 0;
        for(int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        long long int op = 0;
        for(int i = 1; i <= n; i++)
        {
            if(i == 1) op += (arr[i] - arr[i-1]);
            else if(arr[i] > i) op += ((arr[i] - arr[i-1]) - 1);
        }
        cout << op << endl;
    }
    return 0;
}