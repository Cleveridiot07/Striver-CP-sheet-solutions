#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()
{
    int x, y, z;

    cin >> x >> y >> z;

    int a = abs(y - x) + abs(z - x);
    int b = abs(y - x) + abs(z - y);
    int c = abs(z - y) + abs(z - x);
    int min_val = min(a, min(b, c));

    cout << min_val << endl;

    return 0;
}