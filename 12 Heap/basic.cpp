#include <iostream>
using namespace std;

class Heap
{
public:
    int arr[101];
    int size;
    Heap()
    {
        size = 0;
    }
    void insert(int data)
    {
        size++;
        if (size > 101)
            cout << "Heap overflow" << endl;
        // insert
        arr[size] = data;
        // check heap property
        int index = size;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
                break;
        }
    }
};

int main()
{
    Heap h;
    h.arr[0] = -1;
    h.arr[1] = 100;
    h.arr[2] = 50;
    h.arr[3] = 60;
    h.arr[4] = 40;
    h.arr[5] = 30;
    h.arr[6] = 25;
    h.arr[7] = 20;
    h.arr[8] = 18;
    h.size = 8;

    cout << "Before Printing ... " << endl;
    for (int i = 0; i <= h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    cout << endl;
    h.insert(110);

    cout << "After Printing ... " << endl;
    for (int i = 0; i <= h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    cout << endl;

    cout << " \n=== end ===";
    return 0;
}