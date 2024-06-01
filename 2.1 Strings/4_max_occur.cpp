#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "testoooo";
    // o => 4
    map<char, int> m;

    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }

    int mx = 0;
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