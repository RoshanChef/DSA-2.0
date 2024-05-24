#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l;
    l.push_back(3);
    l.push_front(5);
    l.push_front(65);

    for (int ele : l)
    {
        cout << ele << " ";
    }
    cout << endl;

    list<int> l2(l);
    for (int ele : l2)
    {
        cout << ele << " ";
    }
    cout << endl;
    l2.pop_front();
    cout << "List 2 " << endl;
    for (int ele : l2)
    {
        cout << ele << " ";
    }
    cout << endl;
    cout << "List 1 " << endl;
    for (int ele : l)
    {
        cout << ele << " ";
    }
    cout << endl;
    cout << l.size() << endl;
    cout << l2.size() << endl;

    return 0;
}