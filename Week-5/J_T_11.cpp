#include<bits/stdc++.h>
#define ll long long int
#define fr(x, s, e, b) for(int x = s; x < e; x = x + b)
#define efr(val, where) for(auto& val : where)
#define el '\n'
#define co cout
#define ci cin
#define vtr vector
#define pb push_back
using namespace std;
void solveT()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
        ci >> n >> x;
        int arr[n];
        fr(i, 0, n, 1) ci >> arr[i];
        ll high = 1e10;
        ll low = 0;
        while(low <= high)
        {
            ll mid = (low + high) / 2;
            ll sum = 0;
            fr(i, 0, n, 1)
            {
                if(arr[i] < mid) sum += (mid - arr[i]);
            }
            if(sum > x) high = mid - 1;
            else low = mid + 1; 
        }
        co << low - 1 << el;
    }
}
void solve()
{
    
}
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);

    solveT();
    // solve();
    return 0;
}