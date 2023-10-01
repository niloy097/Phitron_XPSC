#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // long long int r_sum = (n * (n + 1)) / 2;
    long long r_sum = 0;
    for(int i = 1; i <= n ; i++)
    {
        r_sum += i;
    }
    int arr[n];
    long long int a_sum = 0;
    for(int i = 0; i < n-1; i++)
    {
        cin >> arr[i];
        a_sum += arr[i];
    }
    cout << r_sum - a_sum << endl;
    return 0;
}