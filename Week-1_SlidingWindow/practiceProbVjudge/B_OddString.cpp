#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;
    for(int i = 0; i < x.size(); i += 2)
    {
        cout << x[i];
    }
    cout << endl;
    return 0;
}