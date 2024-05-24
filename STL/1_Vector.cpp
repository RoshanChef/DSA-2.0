#include <iostream>
#include <vector>
using namespace std;

void Vprint(vector<int> v)
{
    for (int ele : v)
    {
        cout << ele << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;

    cout << "Capacity : " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity : " << v.capacity() << endl;

    v.push_back(4);
    cout << "Capacity : " << v.capacity() << endl;

    v.push_back(5);
    // cout << "Capacity : " << v.capacity() << endl;
    // cout << "size : " << v.size() << endl;

    //  3  4  5

    // cout << v.front() << endl;
    // cout << v.back() << endl;
    // Vprint(v);
    // v.pop_back();
    // Vprint(v);
    // v.pop_back();
    // Vprint(v);
    // cout << "value at " << v.at(0);

    Vprint(v);
    //   cout << "capacity => " << v.capacity() << endl;
    //   cout << "size => " << v.size() << endl;

    //   v.clear();
    //   cout << "capacity => " << v.capacity() << endl;
    //   cout << "size => " << v.size() << endl;
    //   Vprint(v);
    //   vector<int> vt(5 , 1);
    //   Vprint(vt);

    vector<int> vt(5, 9);
    Vprint(vt);

    vector<int> gt(vt);
    Vprint(gt);
    
    cout << "size vt => " << vt.size() << endl;
    cout << "size gt => " << gt.size() << endl;

    int row = 5 ,col = 6; 
    
    vector<vector<int>> arr(row,vector<int>(col,1));
    
    for(vector<int> iter : arr){
        for(int val:iter){
            cout<< val<<" "; 
        }
        cout <<endl; 
    }


    return 0;
}