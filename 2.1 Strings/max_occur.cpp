#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "testoooo";
    map<char, int> m;

    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }

    int mx = INT_MIN;
    char max = 0;
    for (auto key : m)
    {
        if (key.second > mx)
        {
            mx = key.second;
            max = key.first;
        }
        cout << key.second << " ";
    }

    cout << "max occurence " << max << endl;

    return 0;
}