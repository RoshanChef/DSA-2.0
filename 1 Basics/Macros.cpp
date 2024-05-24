#include <iostream>
#define pi 3.14
using namespace std;

//Global  >> alternative reference variables
int score = 12; 


int main()
{
    //before compile replace 
    int area = pi * 3 * 3;
    cout << area << endl;

    int a = 23 , b = 2; 
    int c = (a>b)?a:b;
    cout<<"greater " << c<<endl;

    return 0;
}