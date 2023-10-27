// #include<bits/stdc++.h>
// using namespace std;
// //Conclusion
// // if(x & y == z)
// // then x & z == z ans y & z == z
// int main()
// {
//     //if a > b then a ^ b >= a

//     // int x = 45, y = 21;
//     // int ans = x & y; // 5;
//     // int as1 = x & 5; // ans = as1;
//     // int as2 = 21 & 5; // ans = as2;
//     // cout << as2 << endl;

//     cout << (-1 & 100) << endl; // (-1 & x) is always = x;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
const int N  = 1e5 + 7;
vector<int> graph[N];
vector<bool> visited(N, false);
void dfs(int root)
{
    visited[root] = true;
    // cout << root << " ";
    bool flag = false;
    for(int child : graph[root])
    {
        if(!visited[child])
        {
            flag = true;
            dfs(child);
        }
    }

    if(flag == false) cout << root << " ";
}
int main()
{
    int n, m; cin >> n >> m;
    while(m--)
    {
        int u, v; 
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(1);
    cout << endl;
    cout << "Leaf Nodes: ";
    
    return 0;
}