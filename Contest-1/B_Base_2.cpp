//Not Solved and not was in this contest
//Inported from other site
#include<bits/stdc++.h>
#define ll long long
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
        
    }
}
const int N = 100;
void solve()
{
    int size = 0;
    int n;
    int arr[N];
    while(cin >> n)
    {
        arr[size] = n;
        size++;
    }
    long long int sum = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == 1) sum += (long long int) pow(2, i);
    }
    co << sum << el;
}
int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);

    // solveT();
    solve();
    return 0;
}