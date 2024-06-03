#include <iostream>
#include <vector>
using namespace std;

int Peaks_moutain(vector<int> &arr)
{
    int low = 0;
    int high = arr.size() - 1;

    while (low < high)
    {
        int mid = low + (high - low) / 2;

        //  left side
        if (arr[mid] < arr[mid + 1])
        {
            low = mid + 1;
        }
        //  right side
        else
        {
            high = mid;
        }
    }
    return low;
}

int main()
{
    vector<int> v = {5, 9, 17, 16, 12, 3, 2};
    // peak index
    cout << "Index : " << Peaks_moutain(v) << endl;
    cout << v[Peaks_moutain(v)] << endl;

    return 0;
}