#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int c = 1;
    for (int i = 1; i <= x; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= y; j++)
            {
                cout << "#";
            }
            cout << endl;
        }
        else
        {
            if (c % 2 != 0)
            {
                for (int j = 1; j < y; j++)
                {
                    cout << ".";
                }
                cout << "#" << endl;
            }
            else
            {
                cout << "#";
                for (int j = 1; j < y; j++)
                {
                    cout << ".";
                }
                cout << endl;
            }
            c++;
        }
    }

    return 0;
}