#include <bits/stdc++.h>

using namespace std;

int c[10001][10001], n, u;

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
            if (!vis[j] && minW > c[v][j])
                {
                    minW = c[v][j];
                    w = j;
                }
        vis[w] = true;
        cost += c[v][w];
        v = w;
    }
    cost += c[v][u];
    return cost;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("GTS1.INP", "r", stdin);
    freopen("GTS1.OUT", "w", stdout);
    cin >> n >> u;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> c[i][j];
    cout << gts1(u);
    return 0;
}
