#include <iostream>
#include <vector>
using namespace std;

void NumPrime(int number)
{
    int count = 0;

    vector<bool> v(number + 1, true);
    v[0] = v[1] = 0;

    for (int i = 2; i <= number; i++)
    {
        if (v[i])
        {
            count++;
            for (int j = i * 2; j <= number; j += i)
            {
                v[j] = false;
            }
        }
    }
    cout << "Total prime number is : " << count << endl;
}

// TC  O(nloglogn) 
// SC  O(prime_number)

int main()
{

    int n;
    cin >> n;
    NumPrime(n);

    cout << "\n\ncode is finished !! ";
    return 0;
}