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
    int i = 0, j = 0;
    queue<int> qu;
    while(j < n)
    {
        if(arr[j] < 0)
        {
            qu.push(arr[j]);
        }
        if(j >= win - 1)
        {
            if(qu.size()) cout << qu.front() << " ";
            else cout << 0 << " ";
            if(arr[i] < 0) qu.pop();
            i++;
        }

        j++;
    }
    return 0;
}