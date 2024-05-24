#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter the number : ";
    cin >> n;

    int row = 1;
    // rows
    while (row <= n)
    {
        // columns
        int col = 1;
        while (col <= n)
        {
            cout << 3 * (row - 1) + col << " ";
            col = col + 1;
        }

        row = row + 1;
        cout << endl;
    }

    return 0;
}