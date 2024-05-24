#include <iostream>
using namespace std;

void rev(string &str, int s, int e)
{
    // Base condition ..
    if (s >= e)
        return;

    // processing
    swap(str[s], str[e]);

    // recursive call
    return rev(str, s + 1, e - 1);
}

//without second pointer .. 
void single(string &str, int s)
{
    if (s >= str.length() - 1 - s)
        return;

    // processing
    swap(str[s], str[str.length() - 1 - s]);

    // recursive call
    return single(str, s + 1);
}

int main()
{
    string str = "abcd";
    cout << "Before " << str << endl;
    // rev(str, 0, str.length() - 1);
    single(str, 0);
    cout << "After " << str << endl;

    return 0;
}