#include <bits/stdc++.h>

using namespace std;

int main()
{
    srand(time(nullptr));
    int n;
    for (int i = 10; i <= 10; i++)
    {
        ofstream f("test"+to_string(i)+"/GTS1.INP");
        cin >> n;
        f << n << " " << rand()%n+1 << '\n';
        for (int j = 1; j <= n; j++){
            for (int k = 1; k <= n; k++)
                if (j == k)
                    f << "0 ";
                else f << rand()%(20*n)+1 << " ";
            f << '\n';
        }
        f.close();
    }
}
