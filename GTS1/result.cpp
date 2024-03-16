#include <bits/stdc++.h>

using namespace std;

int c[10'001][10'001], n, u;

void docFile(string s)
{
    ifstream f(s);
    f >> n >> u;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            f >> c[i][j];
    f.close();
}

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
    string s;
    clock_t st, en;
    float a[11];
    for (int i = 1; i <= 10; i++){
        st = clock();
        s = "test"+to_string(i)+"/GTS1.INP";
        docFile(s);
        ofstream f("test"+to_string(i)+"/GTS1.OUT");
        int k = gts1(u);
        cout << "Test " << i << " = " << k << '\n';
        f << k;
        en = clock();
        a[i] = (en-st)/1000.0;
        f.close();
    }
    for (int i = 1; i <= 10; i++)
    {
        cout << "Thoi gian chay test " << i << " la: " << a[i] << '\n';
    }
    return 0;
}
