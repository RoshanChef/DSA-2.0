#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int ub = 25, lb = 15;
    for (int j = 0; j < 5; j++)
    {
        int num = rand();
        cout << num % (ub - lb + 1) + lb << endl;
    }

    cout << " \n=== end ===";
    return 0;
}
