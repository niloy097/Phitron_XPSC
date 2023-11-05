#include<bits/stdc++.h>
using namespace std;
bool modified_prime(int n)
{
    if(n <= 1) return false;
    if(n <= 3) return true;
    if(n % 2 == 0 or n % 3 == 0) return false;
    for(int i = 5; i * i <= n; i += 6)
    {
        if(n % i == 0 or n % (i + 2) == 0) return false;
    }
    return true;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        if(n % 2 == 0) cout << "Bob" << endl;
        else if(modified_prime(n)) cout << "Alice" << endl;
        else
        {
            string ans = "Bob";
            for(int i = 3; i <= n; i = i + 2)
            {
                if(n % i == 0 and modified_prime(i))
                {
                    ans = "Alice";
                    break;
                }
            }

            cout << ans << endl;
        }
    }
    return 0;
}