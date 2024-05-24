#include<iostream>
using namespace std;

// it's similar to pointer pointing to content of an container
// declaration
// dt-type::iterator it; 

int main()
{
 
 string s = "roshan";
 string::iterator it = s.begin(); 

 for (; it < s.end(); it++)
 {
   cout<<*it<<" ";
 }
 
    
 return 0;
}