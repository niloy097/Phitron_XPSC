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
        int arr[n];
        int odd = 0, even = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] % 2 == 0) even++;
            else odd++;
        }
        if(odd == 0 || even == 0)
        {
            cout << "YES" << endl;
        }
        else
        {

            int arr1[n];
            int arr2[n];
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    arr1[i] = arr[i] + 1;
                }
                else
                {
                    arr1[i] = arr[i];
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (i % 2 != 0)
                {
                    arr2[i] = arr[i] + 1;
                }
                else
                {
                    arr2[i] = arr[i];
                }
            }
            bool b1 = true, b2 = true;
            for (int i = 0; i < n; i++)
            {
                if (arr1[i] % 2 == 0)
                {
                    b1 = true;
                }
                else
                {
                    b1 = false;
                    break;
                }
            }
             for (int i = 0; i < n; i++)
            {
                if (arr1[i] % 2 != 0)
                {
                    b1 = true;
                }
                else
                {
                    b1 = false;
                    break;
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (arr2[i] % 2 == 0)
                {
                    b2 = true;
                    
                }
                else
                {
                    b2 = false;
                    break;
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (arr2[i] % 2 != 0)
                {
                    b2 = true;
                    
                }
                else
                {
                    b2 = false;
                    break;
                }
            }
            // for (int i = 0; i < n; i++)
            // {
            //     cout << arr1[i] << " ";
            // }
            // cout << endl;
            // for (int i = 0; i < n; i++)
            // {
            //     cout << arr2[i] << " ";
            // }
            // cout << endl;
            if (b1 || b2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        
    }
    return 0;
}