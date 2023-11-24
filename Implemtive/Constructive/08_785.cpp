#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    int sides = 0;
    cin >> n; // Add input for the number of polyhedrons.

    while (n--)
    {
        string input;
        cin >> input;

        if (input == "Tetrahedron")
        {
            sides += 4;
        }
        else if (input == "Cube")
        {
            sides += 6;
        }
        else if (input == "Octahedron")
        {
            sides += 8;
        }
        else if (input == "Dodecahedron")
        {
            sides += 12;
        }
        else if (input == "Icosahedron")
        {
            sides += 20;
        }
    }

    cout << sides << endl;
