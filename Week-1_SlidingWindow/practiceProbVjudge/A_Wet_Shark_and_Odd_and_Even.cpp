#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n; cin >> n;
    long long arr[n+1];
    long long int sum = 0;
    long long mn = LONG_MAX;
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if(arr[i] % 2 != 0 ) mn = min(mn, arr[i]);
        sum += arr[i];
    }
    if(sum % 2 == 0) cout << sum << endl;
    else cout << sum - mn << endl;
    return 0;
}