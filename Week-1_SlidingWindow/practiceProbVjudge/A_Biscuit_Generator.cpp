#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    float sum = 0;
    if(a > c + 0.5) cout << 0 << endl;
    else
    {
        int i = 2;
        int terminator = a;
        while(terminator <= c + 0.5)
        {
            sum += b;
            terminator = (i * a);
            i++; 
        }
        cout << sum << endl;
    }
    return 0;
}