#include <iostream>
#include <string>
#include <vector>
using namespace std;

string check(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 1)
        {
            return "HARD";
        }
    }
    return "EASY";
}

int main()
{
    int t;
    cin >> t;
    vector<int> arr;

    while (t--)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    cout << check(arr);
    return 0;
}