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

int h1(int b[101][101], int c[101][101])
{
    int dem = 0;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            if (b[i][j] == 0)
                continue;
            else if (b[i][j] != c[i][j])
                dem++;
    return dem;
}

int main()
{
    ofstream f("KetQuaH1.OUT");
    for (int i = 1; i <= 5; i++)
    {
        docFile("TEST0"+to_string(i) + ".INP");
        f << "Ket qua test " << i << " = " << h1(b, c) << '\n';
    }
}
