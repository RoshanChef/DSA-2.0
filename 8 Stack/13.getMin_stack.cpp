#include<bits/stdc++.h>
using namespace std; 
class MinStack{
    int minEle;
    stack<int> s;
public:
    int getMin(){
     if(s.size() == 0)
         return -1;
     return minEle;
 }

 int pop()
 {
     if(s.empty())    
        return -1;

    if(s.top() >= minEle)
    {
     int ans = s.top();
     s.pop();
     return ans;
 }
 else if(s.top() < minEle)
 {
     int ans = minEle;
     minEle = 2*minEle-s.top();
     s.pop();
     return ans;
 }

}

void push(int x)
{
 if(s.size() == 0)
 {
     s.push(x);
     minEle = x;
 }
 else
 {
     if(x >= minEle)
     {
         s.push(x);
     }
     else
     {
         s.push(2*x-minEle);
         minEle = x;
     }
 }       
}
};

int main()
{

    return 0;
}