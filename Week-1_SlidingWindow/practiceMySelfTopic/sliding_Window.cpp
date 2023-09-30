//Finding Max from Fixed size window array segment

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n; 
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int win; cin >> win;
    int sum = 0;
    int i = 0, j = 0;
    int mx = INT_MIN;
    while(j < n)
    {
        
        sum += arr[j];

        if(j >= win - 1)
        {
            cout << sum << " ";
            mx = max(mx, sum);
            sum -= arr[i];
            i++;
        }

        j++;
    }
    cout << endl << "Max: " << mx << endl;
    return 0;
}