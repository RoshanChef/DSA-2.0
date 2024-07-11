#include <iostream>
using namespace std;

int B_search(int arr[], int n, int key)
{
    int low = 0, high = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        // founded ..
        if (key == arr[mid])
        {
            return mid;
        }
        // greater than
        else if (key > arr[mid])
        {
            low = mid + 1;
        }
        // less than
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{

    //sorted one .. 
    int ar[] = {5, 11, 13, 17, 19, 27};
    int len = sizeof(ar)/4;
    
    cout<<B_search(ar,len,27);

    


    return 0;
}