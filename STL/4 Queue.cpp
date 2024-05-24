#include <iostream>
#include <queue>
using namespace std;

int main()
{

    queue<int> que;
    que.push(4);
    que.push(15);
    que.push(6);

    cout<<"Queue size "<<que.size()<<endl;
    cout<<"Queue front "<<que.front()<<endl;
    cout<<"Queue back "<<que.back()<<endl;

    return 0;
}