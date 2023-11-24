#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int t;
        int x = 1;
        cin >> t;
        int c = 0;
        vector<int> nums;
        while (t > 0)
        {
            if (t % 10 != 0)
            {
                nums.push_back(x * (t % 10));
                c++;
            }
            t /= 10;
            x *= 10;
        }
        cout << c << endl;
        for (int i = 0; i < nums.size(); i++)
        {
            cout << nums[i] << " ";
        }
        cout << endl;
    }
