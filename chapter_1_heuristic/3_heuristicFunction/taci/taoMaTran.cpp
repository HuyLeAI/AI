#include <bits/stdc++.h>

using namespace std;
int n;
int a[10'002];

void taoTest(string s)
{
    ofstream f(s);
    cout << "n = ";
    cin >> n;
    generate(a+1, a+(n*n+1), [dem = -1]() mutable {return ++dem;});

    random_shuffle(a+1, a+(n*n+1));
    f << n << "\n\n";
    int d = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++)
            f << a[++d] << ' ';
        f << '\n';
    }
    f << '\n';

    random_shuffle(a+1, a+(n*n+1));
    d = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++)
            f << a[++d] << ' ';
        f << '\n';
    }

}

int main()
{
    srand(time(nullptr));
    for (int i = 1; i <= 5; ++i)
    {
        string s = "TEST0"+to_string(i) + ".INP";
        taoTest(s);
    }
    return 0;
}


