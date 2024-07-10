#include <iostream>
using namespace std;
bool check_Palin(string &s, int i)
{
    // Base case ..
    if (i >= s.length() - 1 - i)
        return 1;

    // 1 case ker
    if (s[i] != s[s.length() - 1 - i])
        return 0;

    //backi recursive call
    return check_Palin(s, i + 1);
}

int main()
{
    string s = "nijn";
    bool check = check_Palin(s, 0);
    if (check)
        cout << "Palindrom .. ";
    else
        cout << "not Palindrom .. ";

    return 0;
}