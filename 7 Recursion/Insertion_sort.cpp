#include <iostream>
using namespace std;

void Insertion(int *ar, int s, int len)
{
    // Base case
    if (s == (len - 1))
    {
        return;
    }
    
    // 1 solve ker
    int i = s + 1, j = i - 1;
    int temp = ar[i];
    while (i < len && j >= 0)
    {
        if (temp > ar[j])
        {
            break;
        }
        else
        {
            ar[j + 1] = ar[j];
        }

        j--;
    }
    ar[j + 1] = temp;

    // baki recursive call
    return Insertion(ar, s + 1, len);
}

int main()
{
    int ar[] = {2, 19, 12, 10, 45, 3, 9, 5};
    int len = sizeof(ar) / sizeof(int);

    for (int val : ar)
    {
        cout << val << " ";
    }
    cout << endl;
    Insertion(ar, 0, len);
    for (int val : ar)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << "====================" << endl;
    return 0;
}