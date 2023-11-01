#include <bits/stdc++.h>
using namespace std;
bool FillAllContainers(const vector<int> &vessels, int m, int C)
{
    int container = 1;
    int capacity = C;
    for (int i = 0; i < vessels.size(); ++i)
    {
        if (vessels[i] > C)
            return false;

        if (vessels[i] > capacity)
        {
            if (container == m)
                return false;
            ++container;
            capacity = C;
        }
        capacity -= vessels[i];
    }
    return true;
}

int main()
{  
    int n, m;
    while (cin >> n >> m)
    {
        vector<int> vessels(n);
        for (int i = 0; i < n; ++i)
            cin >> vessels[i];
        int L = 1, U = 1000000000, C = 0;
        while (L <= U)
        {
            int mid = (L + U) / 2;
            if (FillAllContainers(vessels, m, mid))
            {
                C = mid;
                U = mid - 1;
            }
            else
                L = mid + 1;
        }
        cout << C << endl;
    }
    return 0;
}