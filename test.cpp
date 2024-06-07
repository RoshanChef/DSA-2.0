#include<iostream>
using namespace std;

void fn(int * &a){
    cout<<"hello"<<endl;
}

int main()
{
    int * ptr = 0; 
    fn(ptr); 
    
 return 0;
}