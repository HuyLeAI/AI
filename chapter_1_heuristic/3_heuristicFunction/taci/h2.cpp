#include <bits/stdc++.h>

using namespace std;
int n;
int b[101][101], c[101][101];

void docFile(string s)
{
    ifstream f(s);
    f >> n;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            f >> b[i][j];
     for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            f >> c[i][j];
}

pair<int, int> find_in_matrix(int a[101][101], int n, int x)
{
    pair<int, int> res;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            if (a[i][j] == x)
                return {i, j};
    return res;
}

int h2(int b[101][101], int c[101][101])
{
    int dem = 0;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            if (b[i][j] == 0)
                continue;
            else{
                pair<int, int> vitri = find_in_matrix(c, n, b[i][j]);
                dem += abs(i-vitri.first)+abs(j-vitri.second);
            }
    return dem;
}

int main()
{
    ofstream f("KetQuaH2.OUT");
    for (int i = 1; i <= 5; i++)
    {
        docFile("TEST0"+to_string(i) + ".INP");
        f << "Ket qua test " << i << " = " << h2(b, c) << '\n';
    }
}
