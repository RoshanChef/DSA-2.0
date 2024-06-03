#include <iostream>
#include <queue>

using namespace std;

int main()
{
    // //max heap ..
    priority_queue<int> maxi;

    //  //min heap ..
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    int len = maxi.size();
    cout << "Is empty ? " << maxi.empty() << endl;

    for (int i = 0; i < len; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    cout << "Is empty ? " << maxi.empty() << endl;

    return 0;
}