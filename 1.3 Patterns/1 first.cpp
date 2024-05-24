#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number : ";
    cin >> n;

    int i = 1;

    // number of rows 
    while (i <=n)
    {
        int j = 1;
        //number of columns
        while (j <= n)
        {
            cout << i << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}