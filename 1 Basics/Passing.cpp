#include <iostream>
using namespace std;

// return by reference
int &func(int a)
{
    // Bad practice ...
    int num = 123;
    int &ans = num;
    return ans;
}

// return by address
int *ptr(int a)
{
    // Bad practice ...
    int *p = &a;
    return p;
}

// pass by reference
void change(int &i)
{
    i++;
}

// pass by value
void update(int i)
{
    i++;
}

int main()
{
    /*
        int i = 5;
        int &j = i;
    
        cout << i << " " << j << endl;
        j = 67;
        cout << i << " " << j << endl;
     */

    int n = 10;
    cout << "Before " << n << endl;
    update(n);
    cout << "After " << n << endl;
    
    int &i = func(n);

    return 0;
}