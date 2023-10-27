//Not Solved
#include<bits/stdc++.h>
using namespace std;
const int N = (2 * (1e5 + 7));
vector<int> graph[N];
vector<long long int> cnt(N);
vector<bool> visited(N);
void dfs(int node, int parent)
{
    if(graph[node].size() == 1  && node != 1) cnt[node] = 1; // for leaf
    for(auto& child : graph[node])
    {
        if(child != parent)
        {
            dfs(child, node);
            cnt[node] += cnt[child];
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        for(int i = 1; i <= n; i++)
        {
            cnt[i] = 0;
            graph[i].clear();
        }

        for(int i = 1; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            graph[x].push_back(y);
            graph[y].push_back(x);
        }

        dfs(1, -1);

        int ass; cin >> ass;
        while(ass--)
        {
            int x, y; cin >> x >> y;
            cout << 1ll * cnt[x] * cnt[y] << endl;
        }

    }
    return 0;
}