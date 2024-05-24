#include <iostream>
using namespace std;

void reachHome(int src, int des)
{
    // Base case
    if (src == des)
    {
        cout << "Reached Home .. " << endl;
        return;
    }

    // Processig
    src++;

    // Recursive call
    return reachHome(src, des);
}

int main()
{
    int src = 1;
    int des = 10;
    reachHome(src, des);
    return 0;
}