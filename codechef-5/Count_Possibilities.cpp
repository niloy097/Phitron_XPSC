#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100001];
int dis[100001];
int subtree[100001];

void dfs(int node, int par)
{
    int ans = 1;
    for (auto child : adj[node])
    {
        if (child != par)
        {
            dfs(child, node);
        }
    }
    for (auto child : adj[node])
    {
        if (child != par)
        {
            ans += subtree[child];
        }
    }
    subtree[node] = ans;
}

void solve()
{

    int n;
    cin >> n;
    for (int i = 0; i < n + 1; i++)
    {
        subtree[i] = 0;
        adj[i].clear();
    }
    set<int> s;
    for (int i = 1; i < n + 1; i++)
        s.insert(i);
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        s.erase(b);
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int root = *s.begin();

    for (int i = 1; i < n + 1; i++)
        dis[i] = -1;
    dis[root] = 0;
    queue<pair<int, int>> q;
    q.push(make_pair(root, 0));
    while (!q.empty())
    {
        pair<int, int> temp = q.front();
        q.pop();
        for (auto child : adj[temp.first])
        {
            if (dis[child] == -1)
            {
                dis[child] = temp.second + 1;
                q.push(make_pair(child, dis[child]));
            }
        }
    }

    dfs(root, -1);

    vector<int> arr(n + 1, 0);
    for (int i = 1; i < n + 1; i++)
    {
        arr[dis[i]]++;
        int r = n - subtree[i];
        arr[r + 1]--;
    }
    for (int i = 1; i < n + 1; i++)
    {
        arr[i] += arr[i - 1];
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << endl;
}

signed main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {

        solve();
    }
}