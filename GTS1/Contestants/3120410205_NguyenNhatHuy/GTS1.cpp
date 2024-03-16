#include <bits/stdc++.h>

using namespace std;

int n, u;
vector< vector<int> > c;

int gts1(int u)
{
    bool vis[n+1];
    int cost = 0;

    fill_n(vis, n+1, false);
    vis[u] = true;
    int v = u;
    for (int i = 1; i < n; i++)
    {
        int minW = INT_MAX, w;
        for (int j = 1; j <= n; j++)
            if (!vis[j])
                if (minW > c[v][j])
                {
                    minW = c[v][j];
                    w = j;
                }
        vis[w] = true;
        cost += c[v][w];
        v = w;
    }
    return cost;
}

int main()
{
    c.resize(10003);
    for (int i = 0; i <= 10002; ++i)
        c.resize(10003);
    freopen("GTS1.INP", "r", stdin);
    freopen("GTS1.OUT", "w", stdout);
    cin >> n >> u;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> c[i][j];
    cout << gts1(u);
    return 0;
}
