// #include<iostream>
// #include<algorithm>
// #include<vector>

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);

    for (auto ele : v)
    {
        cout << ele << " ";
    }
    cout << endl;

    cout << binary_search(v.begin(), v.end(), -3) << endl;

    string s = "abcd";
    cout << s << endl;
    reverse(s.begin(), s.end());
    cout << s << endl;

    rotate(v.begin(), v.begin() + 2, v.end());
    cout << "Rotate .. " << endl
         << "\t";
    for (auto ele : v)
    {
        cout << ele << " ";
    }
    cout << endl;

    sort(v.begin(), v.end());
    cout << "Sort .. " << endl
         << "\t";
    for (auto ele : v)
    {
        cout << ele << " ";
    }
    cout << endl;

    cout << "min " << min(5, 61) << endl;
    cout << "max " << max(5, 61) << endl;

    cout << "min of vector " << *min_element(v.begin(), v.end()) << endl;
    cout << "max of vector " << *max_element(v.begin(), v.end()) << endl;
    cout << "sum of vector " << accumulate(v.begin(), v.end(), 0) << endl;

    return 0;
}