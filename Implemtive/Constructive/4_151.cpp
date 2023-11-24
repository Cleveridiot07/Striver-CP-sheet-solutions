#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int tl = c * d;
    int td = k * l;
    int x = td / (n * nl);
    int y = tl / n;
    int z = p / (n * np);
    int res = min(x, min(y, z));
    cout << res;
    return 0;
}