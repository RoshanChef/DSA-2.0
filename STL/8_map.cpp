#include <iostream>
#include <map>
using namespace std;

int main()
{
    // sorted order accroding to key (Increasing order in form of key )
    // balance tree
    map<int, string> m;
    m[21] = "Roshan";
    m[23] = "Virat";
    m[3] = "Neha";

    // another way ..
    m.insert({5, "Bheem"});

    cout << "Keys are " << endl;
    for (auto val : m)
    {
        cout << val.first << " -> " << val.second << endl;
    }

    cout << endl;
    cout << endl;

    cout << "Values are " << endl;
    for (auto val : m)
    {
        cout << val.second << " ";
    }
    cout << endl;

    // erase
    m.erase(23);
    cout << "Values are " << endl;
    for (auto val : m)
    {
        cout << val.first << " " << val.second << endl;
    }
    cout << endl;

    return 0;
}