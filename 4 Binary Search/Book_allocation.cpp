#include <iostream>
using namespace std;
int maxi(int arr[], int len)
{

    int maxii = arr[0];
    for (int i = 1; i < len; i++)
        if (arr[i] > maxii)
            maxii = arr[i];

    return maxii;
}
int sumof(int arr[], int len)
{
    int ans = arr[0];
    for (int i = 1; i < len; i++)
    {
        ans += arr[i];
    }
    return ans;
}
int Count_stud(int BookShell[], int student, int cap, int len)
{
    int sum = 0;
    int st = 1;
    for (int i = 0; i < len; i++)
    {
        sum += BookShell[i];
        if (sum > cap)
        {
            st++;
            sum = BookShell[i];
        }
        if (st > student)
        {
            return st;
        }
    }
    return st;
}

// Brute force
int BookAllocation(int BookShell[], int student, int len)
{
    int ans;

    int start = maxi(BookShell, len);
    int end = sumof(BookShell, len);

    for (int i = start; i < end; i++)
    {
        int curStudent = Count_stud(BookShell, student, i, len);
        if (curStudent == student)
        {
            ans = i;
            break;
        }
    }

    return ans;
}

// BS
int BookAllocation_BS(int BookShell[], int student, int len)
{
    if (student > len)
    {
        return -1;
    }

    int start = maxi(BookShell, len);
    int end = sumof(BookShell, len);

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        int curStudent = Count_stud(BookShell, student, mid, len);
        if (curStudent > student)
        {
            start = mid + 1;
        }
        else
        {
            // less student
            end = mid - 1;
        }
    }

    return start;
}

int main()
{
    // int Book_shell[4] = {12, 34, 67, 90};
    int Book_shell[4] = {10, 20, 30, 40};

    // Linear .. 
    // int ans = BookAllocation(Book_shell, 2, 4);
    //BS ..
    int ans = BookAllocation_BS(Book_shell, 2, 4);

    cout << "Required ans " << ans << endl;
    return 0;
}